# Cirno 的完美函数教室 2023

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

Cirno 又找到 Yakumo Ran 学习数学了！这次 Ran 打算教她一点函数的知识。

## 题目描述

Ran 给出的函数有一些性质：

$$\operatorname{B}(\alpha,\beta,\gamma)= \begin{cases} 1 ,& \text{if}\quad\alpha \leq 0\;\text{or}\;\beta \leq 0\;\text{or}\;\gamma \leq 0 \\ \operatorname{B}(25,25,25) ,& \text{else if}\quad\alpha>25\;\text{or}\;\beta>25\;\text{or}\;\gamma>25 \\ \operatorname{B}(\alpha,\beta,\gamma-1)+\operatorname{B}(\alpha,\beta-1,\gamma-1)-\operatorname{B}(\alpha,\beta-1,\gamma) ,& \text{else if}\quad\alpha<\beta<\gamma \\ \operatorname{B}(\alpha-1,\beta,\gamma)+\operatorname{B}(\alpha-1,\beta-1,\gamma)+\operatorname{B}(\alpha-1,\beta,\gamma-1)-\operatorname{B}(\alpha-1,\beta-1,\gamma-1) ,& \text{else.} \end{cases}$$

Ran 想考考 Cirno，任意给定三个整数 $a,b,c$，她能不能通过以上性质来计算出 $\operatorname{B}(a,b,c)$ 的值。为了防止 Cirno 蒙混过关，Ran 一共会询问 $T$ 次。

## 输入

**多组数据输入。**

第一行一个整数 $T$（$1 \leq T \leq 10^5$），表示数据组数。

接下来 $T$ 行，每行三个整数 $a,b,c$，含义见上，保证 $a,b,c$ 在 `int` 范围内。

数据保证计算过程与结果均在 `int` 范围内。

## 输出

每组数据一行一个整数，表示 $\operatorname{B}(a,b,c)$ 的值。

## 输入样例

    3
    1 2 3
    -1 -2 -3
    3 2 1

## 输出样例

    2
    1
    7

## Hint

可以把算过的数存在数组中，避免重复计算。
