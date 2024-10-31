# 摩卡与音游 2024

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

Moca 最近在玩一款音游。

每首歌曲都有若干个按键，对于每个音符，Moca 都能打出判定 `perfect` 、 `great` 、 `bad` 、 `miss` 中的一种，其中 `bad` 和 `miss` 将会中断连击，而 `perfect` 和 `great` 能够保持连击；同时，每种按键会对应一个表现分，四种按键对应的表现分分别为 `300` 、 `208` 、 `105` 和 `0` 。

现在，Moca 希望你帮她算出一场游戏后，她能获得多少表现分。

## 输入

第一行一个正整数 $n$，$1 \le n \le 2000000$。

接下来 $n$ 行每行 $1$ 个字符 $c$ ，表示 Moca 对应音符的判定，其中 `p` 表示 `perfect`； `g` 表示 `great` ；`b` 表示 `bad`；`m` 表示 `miss`。

## 输出

第一行一个整数 $score$ ，表示 Moca 的表现分之和。

第二行一个非负整数 `combo` ，表示 Moca 的**最大**连击数。

如果 Moca 对于所有音符都打出了 `perfect` 判定，第三行输出 `All Perfect!`；如果 Moca 没有对所有音符打出 `perfect` 判定，但是对所有音符都打出了 `perfect` 或 `great` 判定，第三行输出 `Full Combo!`；否则第三行输出 `Moca Complete!`。

## 输入样例1

    5
    p
    p
    p
    p
    p

## 输出样例1

    1500
    5
    All Perfect!

## 输入样例2

    4
    p
    g
    p
    g

## 输出样例2

    1016
    4
    Full Combo!

## 输入样例3

    3
    p
    b
    g

## 输出样例3

    613
    1
    Moca Complete!
Author : Moca
