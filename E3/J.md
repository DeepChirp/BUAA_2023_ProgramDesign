# 染色方案

时间限制：2000 ms / 空间限制：204800 KB / 难度：7

## 题目描述

今天可怜的dyc被可恶的柚子抓去给 $n$ 个格子染色，这 $n$ 个格子从左到右编号为：$1,2,\cdots,n$ ，但dyc只认识黑白两种颜色，并且由于他有很强的强迫症，每一种可行的染色方案都必须满足：

- 至少有一个格子被染成黑色。
- 相邻的两个格子不能都被染成黑色。
- 编号差为 $k$ 的格子不能都被染成黑色。

同时，为了奖励dyc的辛苦劳作，每个格子有一个贡献值 $w_i$ ，在染完所有的格子之后，dyc会得到总共的棒棒糖的个数是：
$$ \prod_{1\leq i \leq n,color_i为黑色}w_i $$

现在你想知道，在所有的可行方案中，dyc能得到的棒棒糖总数在模$10^9+7$下是多少？

## 输入

第一行两个用空格隔开的正整数 $n,k$ ，意义如题目所示，保证 $2 \leq k \leq 24$ 且 $k<n\leq 300$ 。

第二行 $n$ 个用空格隔开的正整数 $w_i$ ，表示每个格子的贡献值，保证 $1 \leq w_i \leq 10^9$ 。

## 输出

一行一个正整数，表示所有可能情况的棒棒糖总数的和在模 $10^9+7$ 的值。

## 输入样例

    5 4
    1 2 3 4 5

## 输出样例

    55

*Author: supercarrydyc*