# 小亮学矩阵乘法

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

小亮最近在复习线性代数，但他忘记了矩阵乘法如何计算，请为他写一个C语言程序实现矩阵乘法。

## 题目描述

给定两个矩阵 $A$ 和 $B$ ，其中 $A$ 为 $m$ 行 $n$ 列的矩阵， $B$ 为 $n$ 行 $ k$ 列的矩阵。

请计算出矩阵 $A$ 乘以矩阵 $B$ 的结果。

## 输入

共 $1+m+n$ 行。

第一行，三个空格隔开的正整数 $m,n,k$ ，保证 $1\le m,n,k\le  40$

接下来的 $m$ 行，每行 $n$ 个空格隔开的整数 $a_{i,j}$ ，表示  $m$ 行 $n$ 列的矩阵。

接下来的 $n$ 行，每行 $k$ 个空格隔开的整数 $b_{i,j}$ ，表示  $n$ 行 $ k$ 列的矩阵。

保证 $ a_{i, j}$，$b_{i,j}$ 在 `int` 范围内，且结果矩阵的每个元素在 `long long` 范围内。

## 输出

共 $m$ 行，每行 $k$ 个空格隔开的整数，表示矩阵 $A$ 乘以矩阵 $B$ 的结果。

## 输入样例

    3 2 3
    1 1
    1 1
    1 1
    1 1 1
    1 1 1

## 输出样例

    2 2 2
    2 2 2
    2 2 2

## HINT

如果大家忘了矩阵乘法，可以参考这个网页[矩阵乘法 (shuxuele.com)](https://www.shuxuele.com/algebra/matrix-multiplying.html)。

也可以查看以下定义 (from Wikipedia)：

![ZZNPl.png](https://i0.imgs.ovh/2023/11/03/ZZNPl.png)
