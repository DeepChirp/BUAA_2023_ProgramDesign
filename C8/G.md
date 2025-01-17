# 多项式相加 2023

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

一元多项式的定义如下：

+ 设 $c_0, c_1,...,c_n$ 都是 `int` 范围内的整数，$n$ 是非负整数，那么表达式

$$
c_n \times x^n + c_{n-1} \times x^{n-1} +...+ c_2 \times x^2 + c_1 \times x + c_0
$$

就是 `int` 上关于变量 $x$ 的多项式或一元多项式。

+ 其中，$c_k \times x^k(0 \leq k \leq n)$ 代表该一元多项式中的一个项，$c_k$ 是该项的系数， $k$ 是该项的指数。

现给定两个多项式 $f(x)$ 和 $g(x)$，请你求出二者相加后产生的一元多项式 $f(x) + g(x)$ ，并要求不再输出系数为零的项。

## 输入

第一行两个整数 $N,M  (1 \leq N,M \leq 100000)$，分别代表 $f(x)$ 和 $g(x)$ 的项数。

第二行 $2 \times N$ 个整数，第 $2 \times i - 1$ 和第 $2 \times i$ 个整数分别代表 $f(x)$ 中第 $i$ 项的系数 $a_i$ 和指数 $s_i$ ，$a_i$ 和 $s_i$ 在 `int` 范围内，且保证 $a_i \neq 0，s_i \geq 0，s_i$ 各不相同。

第三行 $2 \times M$ 个整数，第 $2 \times j - 1$ 和第 $2 \times j$ 个整数分别代表 $g(x)$ 中第 $j$ 项的系数 $b_j$ 和指数 $t_j$ ，$b_j$ 和 $t_j$ 在 `int` 范围内，且保证 $b_j \neq 0， t_j \geq 0，t_j$ 各不相同。

注意：**不保证多项式的项按指数大小顺序给出**。

## 输出

输出一行，包含偶数个整数，第 $2 \times k - 1$ 和 $2 \times k$ 个整数分别代表 $f(x) + g(x)$ 中第 $k$ 项的系数和指数，并以**指数严格降序**输出。

## 输入样例

    3 2
    2 0 2 3 11 9
    -11 9 3 2

## 输出样例

    2 3 3 2 2 0

## 样例解释

根据题意可知

$f(x) = 2 + 2 \times x^3 + 11 \times x^9$

$g(x) = -11 \times x^9 + 3 \times x^2$

因而

$f(x) + g(x) = 2 \times x^3 + 3 \times x^2 + 2$

即输出 `2 3 3 2 2 0`

## Hint

注意指数是 `int` 范围内的，而数组最大只能开到 $10^7$ 左右

*Author : violet*
