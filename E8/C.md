# 进位统计

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

对于自然数 $a,b$ ，设 $g=a\otimes b,\ p=a\oplus b$ ，其中 $a\otimes b$ 表示对 $a,b$ 的二进制表示进行**按位与**运算， $a\oplus b$ 表示对 $a,b$ 的二进制表示进行**按位异或**运算，则函数 $f(a, b)$ 定义如下：
$$
f(a,b)=
\begin{cases}
 0 & \text{, if } b = 0 \\
 \operatorname{popcount}(g) + f(p, 2g)& \text{, else. }
\end{cases}
$$
其中， $\operatorname{popcount}(g)$ 表示 $g$ 的二进制表示中有多少位是 $1$ 。

给出若干对 $a,b$ ，请你计算 $f(a,b)$ 。

## 输入

**不定组数据输入**，保证数据组数不超过 $10000$

每组数据输入一行，两个自然数 $a,b$ ，保证 $0\le a,b<2^{30}$

## 输出

每组数据输出一行，一个自然数，表示 $f(a,b)$

## 输入样例

    1 1
    3 5

## 输出样例

    1
    3
