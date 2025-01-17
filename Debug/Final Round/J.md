# 繁琐的识别（Musha 版）

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目背景

Musha 想起来自己以前做过一个题，她觉得自己设计了一个非常巧妙的算法，并且十分激动地想向你介绍一下。〃•ω‹〃

下面是题目背景：

阿比多斯学院的智能机有一种特殊的识别系统，可以识别整数。你需要复现这种识别系统的一部分功能。整数中包含 `0123456789` 十种字符，而你需要识别出整数的内容。

你可以往下看看，就可以理解题目想让你干什么了，也许你会觉得这个题目挺麻烦，但是，只要理解了 Musha 代码的意思，一切困难就都可以迎刃而解了！

## 输入格式

九行，不超过一百列，由小写字母 `x` 和空格组成的算式

整数是由多个字符水平排列而成的。所有单个字符的样例在题目下方给出。

每个字符的所占区域（在字符样例部分，用小数点表示出）不会相邻，不保证数字 $1$ 前会有足够列数的空格，但保证不同数字间至少会有一列空格用于区分。字符在水平和竖直方向的位置都不确定。

## 输出格式

一行一个整数，表示识别的结果。

## 输入样例

         xxxxx     xxx
         x   x       x
         x   x       x
     xxx xxxxx       x
     x x x   x xxx   x
     xxx x   x x
       x xxxxx xxx
     xxx       x x
               xxx

## 输出样例

    9867

## 单个数字样式

每个数字会有两种样式，分别是大号的和小号的。下列整数中间的 `.` 仅用作帮助你查看而已，测试数据中不会出现。

    xxxxx  ....x  xxxxx  xxxxx  x...x
    x...x  ....x  ....x  ....x  x...x
    x...x  ....x  ....x  ....x  x...x
    x...x  ....x  xxxxx  xxxxx  xxxxx
    x...x  ....x  x....  ....x  ....x
    x...x  ....x  x....  ....x  ....x
    xxxxx  ....x  xxxxx  xxxxx  ....x

    xxxxx  xxxxx  xxxxx  xxxxx  xxxxx
    x....  x....  ....x  x...x  x...x
    x....  x....  ....x  x...x  x...x
    xxxxx  xxxxx  ....x  xxxxx  xxxxx
    ....x  x...x  ....x  x...x  ....x
    ....x  x...x  ....x  x...x  ....x
    xxxxx  xxxxx  ....x  xxxxx  xxxxx

     xxx    ..x    xxx    xxx    x.x
     x.x    ..x    ..x    ..x    x.x
     x.x    ..x    xxx    xxx    xxx
     x.x    ..x    x..    ..x    ..x
     xxx    ..x    xxx    xxx    ..x

     xxx    xxx    xxx    xxx    xxx
     x..    x..    ..x    x.x    x.x
     xxx    xxx    ..x    xxx    xxx
     ..x    x.x    ..x    x.x    ..x
     xxx    xxx    ..x    xxx    xxx

## Bug 代码

    #include <stdio.h>
    #include <string.h>

    #define MIN(x, y) (((x) < (y)) ? (x) : (y))
    #define MAX(x, y) (((x) > (y)) ? (x) : (y))

    char s[9][105];

    // identify
    int small[] = {525, 5, 434, 335, 315, 434, 534, 115, 535, 435};
    int big[] = {71117, 7, 53335, 33337, 41117, 53335, 73335, 11117, 73337, 53337};

    int get_string(char *str) {
        gets(str);
        int res = strlen(str);
        return res;
    }

    int count_column(int col) {
        int res = 0;
        for (int i = 0; i < 9; ++i) {
            res += (s[i][col] == 'x');
        }
        return res;
    }

    int identify(int start, int span) {
        int res = 0, base = 1;
        for (int i = start + span - 1; i >= start; --i) {
            res += base * count_column(i);
            base *= 10;
        }
        return res;
    }

    int main(void) {
        int len = 0, tmp_len;
        int span;
        int start, end, id;
        for (int i = 0; i < 9; ++i) {
            tmp_len = get_string(s[i]);
            len = MAX(tmp_len, len);
        }
        for (start = 0; start < len; start = end) {
            if (!count_column(start)) {
                end = start + 1;
                continue;
            }
            for (end = start; end < len; ++end) {
                if (!count_column(end)) {
                    break;
                }
            }
            span = end - start;
            if (span == 1) { // big 1 or small 1
                putchar('1');
            }
            if (span == 3) { // small
                id = identify(start, span);
                int i;
                for (i = 0; i <= 9 && id != small[i]; ++i);
                    if (i != 2 && i != 5) {
                        putchar('0' + i);
                    } else {
                        for (int j = 0; j < 9; ++j) {
                            if (s[j][start] == 'x') {
                                putchar(s[j + 1][start] == 'x' ? '2' : '5');
                            }
                        }
                    }
            } else { // big
                id = identify(start, span);
                int i;
                for (i = 0; i <= 9 && id != big[i]; ++i);
                    if (i != 2 && i != 5 && i <= 9) {
                        putchar('0' + i);
                    } else {
                        for (int j = 0; j < 9; ++j) {
                            if (s[j][start] == 'x') {
                                putchar(s[j + 1][start] == 'x' ? '2' : '5');
                            }
                        }
                    }
            }
        }
        return 0;
    }

$Author:yt$

$Adapted:kai_Ker$
