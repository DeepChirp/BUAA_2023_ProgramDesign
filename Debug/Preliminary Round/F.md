# Yamche 的阶乘

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目背景

Yamche 在算阶乘！它要算的阶乘真的很大！它设计出了一种高精度算法，能够计算非常非常大的阶乘。

它使用了一个数组，数组里的每一个数相当于“一位”，它在代码中选取的模值为 `1000000`，也就是说，**每一位**上存储的值为 `0 ~ 999999`，比如：

`{123456, 321}` 代表的整数为 `321123456`；`{321, 1234, 98}` 代表的整数为 `98001234000321` 等等。

你可以把它理解成一个 **一百万进制** 的数，数组中的每个元素是每一位上的数，但你最终要输出为十进制，并且**没有前导零**。

## 输入格式

共 $n + 1$ 行。

第一行一个整数 $n$ 表示数据的组数。

接下来 $n$ 行，每行一个整数，带计算的数 $a$。

## 输出格式

共 $n$ 行，每组数据一行，为 $a!$ 的值。规定 $0!=1$

## 数据范围

$1 \leqslant n \leqslant 100$，数据保证每个计算结果不超过 1000 位，且不会出现负数的阶乘的情况。

## 输入样例

    2
    9
    19

## 输出样例

    362880
    121645100408832000

## Bug 代码

    #include <stdio.h>

    const int MOD = 1000000;

    #define ZFILL_0 0
    #define ZFILL_1 1
    #define ZFILL_2 2
    #define ZFILL_3 3
    #define ZFILL_4 4
    #define ZFILL_5 5

    int main() {
        int T;
        scanf("%d", &T);
        while (T--) {
            int digit[1000] = {0};
            int place = 1; // 位数（MOD 进制），每一位存储 0 ~ MOD-1
            int carry; // 进位
            int n;
            scanf("%d", &n);
            for (int i = 2; i <= n; ++i) {
                int j;
                for (j = 0; j < place || carry != 0; ++j) {
                    digit[j] = digit[j] + carry;
                    digit[j] = digit[j] * i;
                    carry = digit[j] / MOD;
                    digit[j] = digit[j] % MOD;
                }
                place = j;
            }
            for (int i = place - 1; i >= 0; --i) {
                int zfill; // 在每一位前补充 0 的标志变量
                if (digit[i] >= 100000) {
                    zfill = ZFILL_0; // Need 0 zero
                } else if (digit[i] >= 10000) {
                    zfill = ZFILL_1; // Need 1 zero
                } else if (digit[i] >= 1000) {
                    zfill = ZFILL_2; // Need 2 zeros
                } else if (digit[i] >= 100) {
                    zfill = ZFILL_3; // Need 3 zeros
                } else if (digit[i] >= 10) {
                    zfill = ZFILL_4; // Need 4 zeros
                } else {
                    zfill = ZFILL_5; // Need 5 zeros
                }
                switch (zfill) {
                case ZFILL_5:
                    putchar('0');
                case ZFILL_4:
                    putchar('0');
                case ZFILL_3:
                    putchar('0');
                case ZFILL_2:
                    putchar('0');
                case ZFILL_1:
                    putchar('0');
                case ZFILL_0:
                    printf("%d", digit[i]);
                }
            }
            putchar('\n');
        }
        return 0;
    }

$Author:kai_Ker$
