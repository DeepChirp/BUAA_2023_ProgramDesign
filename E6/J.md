# 摩卡与水獭乐团派对

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

为了庆祝水獭大学的 $71$ 岁生日，小水獭们决定开一个乐团派对。

每名乐团水獭都有一个互不相同的编号，对应着它们上台的顺序。但是由于小水獭们太紧张了，上台之前，它们手忙脚乱地挤在了一起。Moca 看见了慌张的水獭们，于是让水獭们先就近站成一排，然后 Moca 每次指挥**相邻的两只水獭**交换位置，直到水獭们按编号从小到大排成一排。

由于水獭们想要尽快上台，所以交换次数需要尽可能地少，你能帮 Moca 计算一下最少交换次数吗？

## 输入

第一行一个正整数 $n$ ，表示水獭的个数，$1 \le n \le 100000$ 。

第二行 $n$ 个正整数，表示水獭们的编号，所有水獭的编号放在一起是从 $1$ 到 $n$ 之间的所有正整数（包括 $1$ 和 $n$）。

## 输出

输出 $1$ 个正整数，表示水獭们**至少**需要多少次位置交换才能按编号从小到大排成一列。

## 输入样例

    4
    4 3 1 2

## 输出样例

    5

## 样例解释

开始时，$4$ 号水獭分别与 $3$、$1$ 和 $2$ 号水獭交换位置，水獭顺序变为 $3\ 1\ 2\ 4$；$3$ 号水獭再分别与 $1$ 号、$2$ 号水獭交换位置，总共交换了 $5$ 次位置。

## Hint

对于前半段有序、后半段也有序的数列，如 $2 \ 4 \ 6 \ 1 \ 3 \ 5$ ，或 $1 \ 4 \ 5 \ 6 \ 2 \ 3 \ 7\ 8$ ，除了模拟外，你有没有什么更好的方法计算出最少交换次数。

再结合我们学过的递归函数，你有没有什么好的方法解决这个问题？

Author：Moca
