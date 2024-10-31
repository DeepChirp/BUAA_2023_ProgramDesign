# Yamche 学数数

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

作为一只新生的凤凰，Yamche 一直在学数数，也许是 Musha 教得太难了，它似乎一直学不太会。

每次，Musha 会写一个整数给 Yamche，然后让它说出这个数的 **32 位二进制补码表示**中 $1$ 的个数，你能帮帮它吗？

## 输入格式

共 $n + 1$ 行。

第一行一个整数 $n$ 表示数据的组数。

接下来 $n$ 行，每行一个整数，表示需要统计的数。

## 输出格式

共 $n$ 行，每组数据一行，表示该数的 32 位二进制补码表示中 $1$ 的个数。

## 数据范围

$1 \leqslant n \leqslant 1024$，并保证接下来的所有数据均在 32 位**有符号整型**的表示范围内。

## 输入样例

    3
    10
    2147483647
    -1

## 输出样例

    2
    31
    32

## Bug 代码

    #include <stdio.h>

    int main() {
        int T;
        scanf("%d", &T);
        while (T--) {
            int number, answer = 0;
            scanf("%d", &number);
            while (number != 0) {
                if (number & 1) {
                    answer++;
                }
                number = number >> 1;
            }
            printf("%d\n", answer);
        }
        return 0;
    }

$Author:kai_Ker$
