# 将军点兵

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

古有韩信沙场点兵，今有雷电将军点兵，出征前，将军让所有士兵每 $x_1$ 人站一排，多出 $y_1$ 人；每$x_2$人站一排，多出 $y_2$ 人；每 $x_3$ 人站一排，多出 $y_3$ 人。兼具美貌和智慧的八重神子小姐马上算出了将军点兵的总人数，可将军还没弄清楚，请你编程帮帮将军吧！

## 输入

共 $ 3 $ 行，第 $ i $ 行包含两数个， 分别为 $x_i$ 和 $y_i$

## 输出

共 $1$ 行，为符合题目要求的**最少**人数。

## 输入样例

    3 2
    5 3
    7 2

## 输出样例

    23

## 数据范围

确保输入的所有数据为  `int` 范围内的**正整数**

最终结果 $reult$ 满足

$$
result \lt 10^8
$$

确保输入除数 $x_i$ 两两互素。$i \in\{1, 2, 3\}$

## HINT

如果没有想法，最暴力的方法也是一种选择。

## 典故

韩信点兵源于民间传说：韩信带兵1500人，战损四五百人。战后每3人站一排，多出2人；每5人站一排，多出3人；每7人站一排，多出2人。韩信由此马上算出了部队人数，有1073名士兵。

本质上这个问题是“中国剩余定理”，有兴趣的同学可以课后了解。

*Author：八重绳子*
