# 月相判断

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目背景

Musha 今天不要你帮忙！她回到了她原本在的那个荒野，并托我给你带个口信，告诉你**不要紧张，不要着急，沉着冷静读题、读代码，尝试构造样例，尝试单步调试，逐步锁定 Bug 位置**，你一定可以的！

---

话说到 Musha 所在的那个世界，和咱地球上一样，也会有月亮的阴晴圆缺的周期性变化，但是那个世界的月相更加规律：

每次满月持续两天，从纪元 0 天开始，**第一次满月**出现在纪元 9 天与纪元 10 天。

接下来的满月都在上一次满月的 16 天后，也就是说，**第二次满月**出现在纪元 25 天与 纪元 26 天。

要不咱来判断一下，给定的天数**是否是满月**？如果是的话，顺便算一算是从纪元 0 天开始的**第几次满月**，怎么样？

## 输入格式

多组数据，共 $n+1$ 行

第一行一个整数 $n$ 表示数据组数。

接下来 $n$ 行，每行一个正整数 $a_i$，表示需要你判断的天数。

## 输出格式

$n$ 行，表示你的判断结果

对于每一个天数，如果是满月，则输出 `Is the full-moon of #i.`，其中 $i$ 表示是第几次满月。

如果不是满月，则输出 `Is not the full-moon.`

## 数据范围

$1 \leqslant n \leqslant 10^5$

$1 \leqslant a_i \leqslant 10^9$

## 输入样例

    3
    9
    11
    41

## 输出样例

    Is the full-moon of #1.
    Is not the full-moon.
    Is the full-moon of #3.

## Bug 代码

    #include <stdio.h>

    int main() {
        int n, d;
        scanf("%d", &n);
        while (--n) {
            scanf("&d", &d);
            if (d % 16 == 9 | d % 16 == 10) {
                printf("Is the full-moon of #%d.\n", d / 16);
            } else {
                printf("Is not the full-moon.\n");
            }
        }
        return 0;
    }

$Author:kai_Ker$
