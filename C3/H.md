# 非标准进制

时间限制：50 ms / 空间限制：2048 KB / 难度：6

**请注意本题时间限制与空间限制**

## 题目描述

对于自然数 $n$ 与大于 $1$ 的正整数 $b_{1}, \cdots, b_{m}$，存在自然数 $a_{0}, a_{1}, \cdots, a_{m}$ 使得：

$$
n = a_{0} + a_{1} b_{1} + a_{2} b_{1} b_{2} + a_{3} b_{1} b_{2} b_{3} + \cdots + a_{m} b_{1} b_{2} \cdots b_{m}
$$

我们希望最小化 $a_{0} + a_{1} + \cdots + a_{m}$。

## 输入

第一行，`unsigned long long int` 范围内的自然数 $n$。

第二行，用一个空格分隔的大于 $1$ 的 `unsigned long long int` 范围内的自然数 $b_{1}, \cdots, b_{m}$，保证 $1 \leqslant m \leqslant 10^{7}$。

## 输出

$a_{0} + a_{1} + \cdots + a_{m}$ 的最小值。

## 输入样例

    95696
    60 60 24

## 输出样例

    93

## 提示

**如果你超出时间限制（TLE），请思考你是否过多进行了不必要的处理。**

**如果你超出空间限制（MLE），请思考你是否过多使用了不必要的变量。**

在 $a_{0} + 60 a_{1} + \left( 60 \times 60 \right) a_{2} + \left( 60 \times 60 \times 24 \right) a_{3} = 95696$ 的条件下 $a_{0} + a_{1} + a_{2} + a_{3}$ 的最小值是 $93$ 。

注意到，$1$ 分钟是 $60$ 秒，$1$ 小时是 $60$ 分钟，$1$ 天是 $24$ 小时，所以 $95696$ 秒是 $1$ 天 $2$ 小时 $34$ 分钟 $56$ 秒，从而 $56 + 34 + 2 + 1= 93$ 。

其实，我们平常用的计时就相当于是混合进制的，60s = 1min，60min = 1h，24h = 1day 。

本题需要同学们对进制有深入的理解，类比常规的进制转换解决问题吧～
