# 寻找字符

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

给出一个字符串 $s$ 和若干个字符。对于每个字符 $c$ ，请按以下要求进行输出：

+ 若 $c$ 在 $s$ 中**未出现**，请输出 `-1`；
+ 若 $c$ 在 $s$ 中**恰好出现一次**，请输出 $c$ 在 $s$ 中的位置，**下标从 $0$ 开始**；
+ 若 $c$ 在 $s$ 中**出现不止一次**，请输出 $c$ 在 $s$ 中第一次出现的位置和最后一次出现的位置的距离。

字符区分大小写。

## 输入

输入共两行。

第一行一个字符串 $s$，长度不超过 $1000$，保证仅有可见字符组成，即 ASCII 码在区间 $[32,126]$ 中。

第二行若干个**连续的**字符，表示给出的若干个字符，个数不超过 $1000$，仅有可见字符组成，即 ASCII 码在区间 $[32,126]$ 中。

## 输出

输出若干行。

对于输入中第二行的每个字符 $c$，请按下方要求输出一行：

+ 若 $c$ 在 $s$ 中**未出现**，请输出 `-1`；
+ 若 $c$ 在 $s$ 中**恰好出现一次**，请输出 $c$ 在 $s$ 中的位置，**下标从 $0$ 开始**；
+ 若 $c$ 在 $s$ 中**出现不止一次**，请输出 $c$ 在 $s$ 中第一次出现的位置和最后一次出现的位置的距离。

## 输入样例

    Website: accoding.buaa.edu.cn
    wW a.

## 输出样例

    -1
    0
    8
    12
    9

## 样例解释

`'w'`（小写w）在 $s$ 中未出现过；

`'W'`（大写W）在 $s$ 中出现过一次，位置为 $0$；

`' '`（空格）在 $s$ 中出现过一次，位置为 $8$；

`'a'`（小写a）在 $s$ 中出现不止一次，第一次出现的位置为 $9$，最后一次出现的位置为 $21$，因此距离为 $12$；

`'.'`（点）在 $s$ 中出现不止一次，第一次出现的位置为 $17$，最后一次出现的位置为 $26$，因此距离为 $9$。

## Hint

可以使用 `string.h` 库中的 `strchr` 和 `strrchr` 函数：

`char *strchr(const char *str, int c)` 在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。

`char *strrchr(const char *str, int c)` 在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置。

![AUQET.jpeg](https://i0.imgs.ovh/2023/11/01/AUQET.jpeg)

注意空格也算字符。

在本地环境调试时，有可能因为最后输入了换行导致多输出了一个 `-1` ，属于正常情况，忽略即可。