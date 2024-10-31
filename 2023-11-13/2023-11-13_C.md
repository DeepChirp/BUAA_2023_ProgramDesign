# one last kiss~

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

对一个字符串，请在不区分大小写的条件下找到它包含的所有 `kiss` 子串的数量，当数量不为 0 时，还需要找到最后一个`kiss` 子串的首字母在原字符串中的位置下标

## 输入

不定组数据输入，保证数据组数不超过 1000

每组数据 1 行，一个仅由可见字符组成且不包含空格的字符串，字符串长度 len 满足 $1\leq len\leq 1000$

## 输出

多行输出，行数与输入行数相同

每行 2 个整数，以空格隔开

第一个数表示对应字符串中包含的 `kiss` 子串数量，第二个数表示当包含的目标子串数量不为 0 时，最后一个 `kiss` 子串的首字母在原字符串中的位置下标（再次强调：不区分大小写），若不包含目标子串则第二个数输出 `-1`

## 输入样例

    CanYouGiveMeOneLastKiss?
    wasuretakunaikoto

## 输出样例

    1 19
    0 -1

## BUG 代码

    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>

    int main() {
        char str[1024];
        while (scanf("%s", str) != EOF) {
            int len = strlen(str);
            int pos = -1;
            int sum = 0;
            for (int i = 0; i < len; i++) {
                if (isupper(str[i])) {
                    str[i] = tolower(str[i]);
                }
            }
            for (int i = 0; i < len; i++) {
                if (strcmp(str+i, "kiss")) {
                    sum++;
                    pos = i;
                }
            }
            printf("%d %d\n", sum, pos);
        }
        return 0;
    }
