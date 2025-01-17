# 一般通过计算式

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

给出若干实数 $x$ ，请计算

$$y=\dfrac{\mathrm{e}^{\cos(\arctan(x))}}{\ln (\cosh(x)+1)}$$

## 输入格式

不定行输入，每行一个实数 $x$。$(-1000\leq x\leq 1000)$

## 输出格式

不定行输出。对于每行输入，输出一行，一个实数 $y$ ，保留三位小数。

## 输入样例

    99.61
    514
    3.14159

## 输出样例

    0.010
    0.002
    0.535

## Hint

建议使用 `math.h` 库中以下几个函数：

`exp(x)` 返回 $\mathrm{e}$ 的 $x$ 次幂的值

`cos(x)` 返回弧度角 $x$ 的余弦

`atan(x)` 返回以弧度表示的 $x$ 的反正切

`log(x)` 返回 $x$ 的自然对数（底数为 $\mathrm{e}$ 的对数）

`cosh(x)` 返回 $x$ 的双曲余弦

-----

*Author:星辰的微光*
