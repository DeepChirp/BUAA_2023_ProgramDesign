# 坐标去重输出23

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

给定 $n$ 个 `int` 范围的数字，这些数字对应 $x$ 轴的坐标。请你将这些坐标去除重复项，并从小到大输出。

## 输入

第一行包含一个整数 $n$，表示坐标的数量。保证 $1 \leq n  \leq 1000000 $

接下来 $n$ 行，每行包含一个范围在 `int` 内的整数 $x_i$，表示第 $i$ 个坐标的位置。

## 输出

按从小到大的顺序输出去重后的坐标，每个坐标之间有一个空格。

## 输入样例

    5
    2
    1
    3
    2
    4

## 输出样例

    1 2 3 4