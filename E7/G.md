# 破壁计划

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目背景

你是三体行星的一个观测员，你收到了来自母星质子对于罗辑的一则观察信息，以及观测到的人类观察员对于该电文的加密规则。现在给出一系列的字符串，请你在该加密规则下解码该电文，帮助三体人了解逻辑的思维。

## 题目描述

对于一个仅由小写字母构成的字符串，将其按以下加密规则进行加密：

- 将字符串逆序，即将字符串进行逐个字符的逆序排列，即第一个字符和最后一个字符互换位置，以此类推。然后，对于电文中的小写字母，将 $a$ 变成 $z$ , $z$ 变成 $a$ , 以此类推。
- 接下来将逆序后的字符串与原始字符串拼接，形成一个长度为 $2l$ 的新字符串（ $l$ 代表原始字符串长度）。
- 将新字符串分为奇数串和偶数串（下标从 $0$ 开始），即第 $2k$ 位上的字符和 $2k+1$ 位上的字符分别组成两个新的字符串，保留字典序较小的字符串作为加密结果。
- 地球人很讨厌三体组织，因此在最后的加密结果中，如果出现 `eto` ，他们就会把 `eto` 都变为 `et0` 。

现给出加密后的字符串，保证长度不超过 $1000$ 且仅由小写字母和 `0` 构成。请你根据上述加密规则，对该字符串进行解密。

可能你已经注意到了，同一个字符串的解密结果可能有两个，例如，对于结果 $bzx $ ，它可以同时由 $cba$ 和 $bcz$ 组成，但就像人无法脚踏两只船一样，你仅能在这两个字符串中选择一个，于是你决定赌一赌字典序排序较小的那个，比如 $bcz$ 。 即，在得到两个解密结果时，你应当选择字典序排序较小的那一个。

## 输入

一行，为一个仅由小写字符串和 $0$ 组成的最多为 $1000$ 位的字符串，表示待解密电文。

## 输出

一行，代表解密后的字符串 $ str $

## 输入样例

    bzx

## 输出样例

    bcz

## 样例解释

`bcz` $\to$ `bczaxy` $\to$ `bzx`

`cba` $\to$ `cbazyx` $\to$ `bzx`

## Not Hint

罗辑，我是你的破壁人。

*Author：罗辑*