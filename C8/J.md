# dyc学几何

时间限制：1000 ms / 空间限制：65536 KB / 难度：6

## 题目描述

dyc学不会几何，他在 $x$ 轴上画了一条长度为 $n$ 的线段，用区间可以表示为 $[0,n]$。他拥有 $k$ 种神奇的画笔，使用每种画笔时会将这条线段上的一部分 $[l,r]$ 染成一种可爱的颜色。现在每次操作dyc会任意地等可能地选择一种画笔（可以选择重复的），并用其将线段染上颜色，当这条线段上所有点都被染上颜色时停止操作。求停止操作时操作次数的期望。

## 输入

**多组数据**，第一行一个正整数 $T$ 表示组数，保证 $T\leq 10$ 。每组数据输入格式如下：

第一行两个正整数 $n,k$ ，其中 $n$ 表示线段的长度，保证 $1\leq n\leq 10^9$ ， $k$ 表示画笔的种类，保证 $1\leq k\leq 15$ 。

之后 $k$ 行，每行两个非负整数 $l_i,r_i$ ，表示第 $i$ 种画笔可以染色的范围，保证 $0 \leq l_i \leq r_i \leq n$ 。

## 输出

每组数据输出一行。

如果操作不可能停止，那么输出 $-1$；

否则输出一个浮点数，表示操作次数的期望，保留 $4$ 位小数。

## 输入样例

    3
    5 2
    0 3
    2 5
    10 4
    0 10
    0 4
    5 10
    0 6
    10 1
    0 7

## 输出样例

    3.0000
    2.6667
    -1

## 样例解释

对于第一组数据，两种画笔，$A$ 是 $[0,3]$，$B$ 是 $[2,5]$。当且仅当 $A,B$ 都被选过时停止操作。因此每次操作选择画笔的情况可能是 $AB, AAB, AAAB, \cdots$ 或者 $BA, BBA, BBBA, \cdots$。可以得到操作次数的期望：

$$
E = (2\times\frac14+3\times\frac18+4\times\frac1{16}+\cdots)+(2\times\frac14+3\times\frac18+4\times\frac1{16}+\cdots)=3
$$

对于第三组数据，可以知道操作不可能停止，因此输出 $-1$ 。

*Author:supercarrydyc*