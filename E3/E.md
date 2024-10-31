# Cirno 的完美位运算教室 2023

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

寺子屋的教学并不能满足 Cirno 的求知欲，她找到了擅长计算的 Yakumo Ran 学习数学。众所周知，Ran 是 Yakumo Yukari 的式神，而在幻想乡式神就是电脑，所以 Ran 教给了 Cirno 一些位运算的相关知识。

## 题目描述

Ran 告诉了 Cirno 一个正整数 $x$ ，让她找到一个满足下列条件的最小正整数 $y$：

+ $x \operatorname{and} y>0$
+ $x \operatorname{xor} y>0$

此处 $\operatorname{and}$ 表示按位与，$\operatorname{xor}$ 表示按位异或。

## 输入

多组数据输入。

第一行一个整数 $T(1 \leq T \leq 10^3)$，表示数据组数。

接下来 $T$ 行，每行一个正整数 $x(1 \leq x \leq 2^{30})$，含义见上。

## 输出

每组数据一行，一个正整数 $y$，表示答案。

## 样例

### 输入

    6
    75
    36
    15
    78
    15
    34

### 输出

    1
    4
    1
    2
    1
    2
