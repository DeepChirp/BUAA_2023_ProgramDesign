# 绩效评定

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

八重堂有 $n$ 名编辑们，他们的业绩得分 $score$ 已经按照降序排列完毕。主管会根据名次 $r$（不是业绩得分）给出对应的等级 $g$（评级为五级制）。

排名规则如下：第一名的名次 $r$ 为 $1$，第二名的名次 $r$ 为 $2$，以此类推。业绩得分相同者名次并列，例如：如果最高得分有两名，他们名次 $r$ 均为 $1$，得分第二高者的名次 $r$ 则为 $3$ 。

评级规则如下：

- $r \le n \cdot 10\%$ ，$g$ 为 `A`
- $n \cdot 10\% < r \le n \cdot 25\%$ ，$g$ 为 `B`
- $n \cdot 25\% < r \le n \cdot 60\%$ ，$g$ 为 `C`
- $n \cdot 60\% < r \le n \cdot 90\%$ ，$g$ 为 `D`
- $r > n \cdot 90\%$ ，$g$ 为 `E`

八重神子希望你编写一个程序用于给编辑们进行绩效评定。

## 输入

共两行

第一行为一个自然数 $n$ ， 表示编辑们的总人数。满足$10\leq n \leq 1000$

第二行为用空格隔开的 $n$ 个数， 表示每个编辑的业绩得分 $score$，确保按**得分降序**排列，且业绩得分为 $100$ 以内的自然数

## 输出

共一行，为用空格隔开的 $n$ 个字符，表示每个编辑的评级。

## 输入样例 1

    12
    100 80 69 69 68 67 39 39 39 1 0 0

## 输出样例 1

    A B B B C C C C C D E E

## 输入样例 2

    10
    100 100 100 100 100 100 100 100 100 100

## 输出样例 2

    A A A A A A A A A A

## 样例解释

对于样例 1，12位编辑的业绩得分名次为 $1, 2, 3, 3, 5, 6, 7, 7, 7, 10, 11, 11$ ，因此评定等级为 `A`, `B`, `B`, `B`, `C`, `C`, `C`, `C`, `C`, `D`, `E`, `E` 。

对于样例 2，10位编辑的业绩得分名次均为 $1$ ，因此评定等级也均为 `A` 。

*Author：八重绳子*
