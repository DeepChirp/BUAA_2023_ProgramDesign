# 水獭密码

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

小水獭把自己的宝物放在了一个保险箱里。

为了宝物不被偷走，小水獭需要对保险箱的密码进行加密，它想到了这样一种加密方式：对于长度为 $k$ 的原密码，先找到满足 $n\times n \ge k$ 的最小正整数 $n$ ，然后将原密码按行填写在 $n \times n$ 的矩阵中，再按列读取 $n \times n$ 矩阵的每一个非空位，拼接起来得到加密后的密码。

比如原密码是 `MocaLovesBread!`，它由 $15$ 个字符组成，所以 $n$ 最小取 $4$ ，将原字符按行填写在 $4 \times 4$ 矩阵中，其中 $\bigodot$ 代表空位（即没有被原密码中的字符填充的位）：
$$
    \begin{matrix}M & o & c & a \\ L & o & v & e \\ s & B & r & e \\ a & d & ! & \bigodot \\
    \end{matrix}
$$
再按列读取 $4 \times 4$ 矩阵的每一个非空位，得到加密后的密码 `MLsaooBdcvr!aee`。

现在小水獭把自己的原密码交给你，你能帮它求出加密后的密码吗？

## 输入

一行，一个长度不超过 $100000$ 的字符串，表示小水獭的原密码，字符串只由**除去空格之外的所有可见字符**组成，即 ASCII 值在 $33$ 到 $126$ 之间的所有 $94$ 个字符。

## 输出

一行字符串，表示加密后的密码。

## 输入样例1

    MocaLovesBread!

## 输出样例1

    MLsaooBdcvr!aee

## 输入样例2

    ~?HappyBirthdayBUAA!

## 输出样例2

    ~ptB?yhUHBdAaiaApry!

Author：Moca
