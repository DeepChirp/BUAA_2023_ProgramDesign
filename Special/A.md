# 国庆的作业

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目背景

国庆假期开始了！在长假中也不能松懈，所以 Kamishirasawa Keine 老师给 Cirno 布置了一道签到题。

## 题目描述

给定一个正整数 $x(3 \leq x \leq 10^4)$，试求两个 `int` 范围内的正整数 $y,z$ 使得：$$x^2+y^2=z^2$$

若有多组解，输出任意一组即可；若无解，请输出 `baka!`。

## 输入

一行一个正整数 $x$，含义见上。

## 输出

若无解，输出一行 `baka!`；

若有解，输出一行三个正整数 $x,y,z$，注意输出时 $x,y,z$ 次序不能交换。

## 样例

### 输入 #1

    3

### 输出 #1

    3 4 5

### 输入 #2

    4

### 输出 #2

    4 3 5