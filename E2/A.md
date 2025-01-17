# 坐标系变换

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

给出一点在极坐标系下的极径 $r$ 和极角 $\theta$ ，求对应直角坐标系下该点的横纵坐标。

## 输入

一行，两个浮点数，分别代表极坐标下的极径 $r$（$0\le r\le 1000$）和极角 $\theta$ $\left(-\dfrac\pi2<\theta\le\dfrac\pi2\right)$（弧度制）。

请用 `scanf` 进行读入 `double` 类型的变量以存储本题输入的浮点数。

## 输出

一行，两个浮点数，代表直角坐标下的横纵坐标，保留 $1$ 位小数。

请使用语句 `printf("<格式化字符串>", x);` 输出浮点数 `x` ，思考应该用什么格式化字符串能够保留 $1$ 位小数。

## 输入样例

    5.00 0.9273

## 输出样例

    3.0 4.0

## Hint

转换到直角坐标系中的坐标是 $(\ r\cdot \cos(\theta)\ ,\, r\cdot \sin(\theta)\,)$ 。

可以调用 `math.h` 中的函数 `sin` 、 `cos` 或 `tan` 来计算三角函数。

注意这几个函数的参数和返回值均为 `double` 类型的变量

![IMG_6460.jpeg](https://res.craft.do/user/full/d84a60e9-717c-82c6-0d94-2c2fbb5c6466/3295AA33-B7FB-44CC-BFD3-DD062186D413_2/9ieybwrmqplQ8d5GIBjtHVyV9F6W05Kg5YLhvqh9aCIz/IMG_6460.jpeg)

> $Aurthor : \mathcal{Red}$
