# 哪吒的递归函数

时间限制：1000 ms / 空间限制：65536 KB / 难度：7

## 题目描述

函数 $f(x)$ 定义如下：
$$
f(x) = \begin{cases}
 1 & \text{, if } x=0 \\
 f\left (\left \lfloor \dfrac x 2 \right \rfloor \right ) + f \left (x-2^{\left \lfloor \log_2x \right \rfloor} \right )   & \text{, else }
\end{cases}
$$
其中 $\left \lfloor \  \right \rfloor$ 表示向下取整。

注意到 $\left \lfloor \dfrac x 2 \right \rfloor$ 是将 $x$ 的二进制表示的最低位去掉， $x-2^{\left \lfloor \log_2x \right \rfloor}$ 是将 $x$ 的二进制表示的最高位去掉。

给出若干个 $x$ ，请你计算 $f(x)$ 。

## 输入

**不定组数据输入**，保证数据组数不超过 $10^5$ 个

每组数据输入一行一个自然数 $x$ ，保证 $0\le x<2^{60}$

## 输出

每组数据输出一行一个整数，表示 $f(x)$ 的值。

## 输入样例

    1
    2
    5
    10

## 输出样例

    2
    3
    5
    8

## 样例解释

 $f(1)=f\left(\left \lfloor \frac12 \right \rfloor\right)+f(1-1)=f(0)+f(0)=2$

 $f(2)=f\left(\left \lfloor \frac22 \right \rfloor\right)+f(2-2)=f(1)+f(0)=3$

 $f(5)=f\left(\left \lfloor \frac52 \right \rfloor\right)+f(5-4)=f(2)+f(1)=5$​

 $f(10)=f\left(\left \lfloor \frac{10}2 \right \rfloor\right)+f(10-8)=f(5)+f(2)=8$

## Hint

暴力递归会TLE的哦~

*Author:* 哪吒
