# 最小的K个数

时间限制：250 ms / 空间限制：65536 KB / 难度：3

## 题目描述

**请注意本题的时间限制。**

给出一个长度为 $n$ 的数列 $a_1, a_2, \cdots, a_n$，请你求出其中**最小的 $K$ 个数**。

## 输入

第一行，两个整数 $n, K$，$(1\leq K\leq 5, K\leq n\leq 10^6)$ 含义如上。

第二行，$n$ 个由空格分隔的整数 $a_1, a_2, \cdots, a_n$，保证 $-2^{31} \leq a_i \leq 2^{31} - 1$。

## 输出

一行，$K$ 个由空格分隔的整数，表示数列 $a_1, a_2, \cdots, a_n$ 中最小的 $K$ 个数（从小到大排序）。

## 输入样例

    10 3
    18 2 16 52 10 1 9 41 5 61

## 输出样例

    1 2 5

## Hint

并不需要对整个数组进行排序，只需找出最小的 $K$ 个数即可。想一想冒泡排序？
