# 圆锥曲线和离心率

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

方程 $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1 $ 可以用来表示一个椭圆。

给出 $8$ 个正整数 $p_1,p_2,\dots,p_8$ ，计算下面 $5 $ 个椭圆的离心率：

|   椭圆编号  |  1   | 2    |  3   |  4   |  5   |
| --- | --- | --- | --- | --- | --- |
|   参数 $a$  |  $p_1$ |  $p_3$ |  $p_7$ |  $p_2$ |  $p_8$   |
|   参数 $b$  |  $p_5$ |  $p_1$ |  $p_6$ |  $p_4$ |  $p_3$   |

## 输入

一行，$8$ 个正整数  $p_1,p_2,\dots,p_8$ ，保证 $8$ 个数互不相等，且均小于 $10^4$

## 输出

一行，$5$ 个浮点数  $e_1,e_2,\dots,e_5$ ，用空格分隔，表示 $5$ 个椭圆的离心率，均保留两位小数。

## 输入样例

    9 8 7 6 5 4 3 2

## 输出样例

    0.83 0.63 0.66 0.66 0.96

## Hint

椭圆 $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1 ,a>b>0$ 的离心率公式： $ e=\dfrac{\sqrt{a^2-b^2}}{a} $ ；

椭圆 $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1 ,b>a>0$ 的离心率公式： $ e=\dfrac{\sqrt{b^2-a^2}}{b} $ 。

*Author: 某数学の咸鱼同学*