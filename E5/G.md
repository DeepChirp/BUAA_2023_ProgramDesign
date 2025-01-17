# 格雷码2023

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

格雷码是一种二进制编码方式，它用 $n$ 位的二进制来表示数。
与普通的二进制表示不同的是，它要求相邻两个数字只能有$1$个数位不同。首尾两个数字也要求只有$1$位之差。

下面是格雷码的递归构造方法：

1. $1$ 位格雷码是 $0,1$
2. $(n+1)$ 位格雷码中的前 $2^n$ 个码字等于 $n$ 位格雷码的码字，按顺序书写，加前缀 $0$
3. $(n+1)$ 位格雷码中的后 $2^n$ 个码字等于 $n$ 位格雷码的码字，按逆序书写，加前缀 $1$
4. $(n+1)$ 位格雷码的集合 $=$ $n$ 位格雷码集合(顺序)加前缀 $0$ + $n$ 位格雷码集合(逆序)加前缀 $1$

请按顺序输出 $n$ 位格雷码。

## 输入

输入一个正整数 $n$ , 表示要输出的格雷码位数。保证 $n\leq 11$。

## 输出

输出 $2^{n}$ 行，按顺序输出 $n$ 位格雷码，每个格雷码占一行。

## 输入样例

    3

## 输出样例

    000
    001
    011
    010
    110
    111
    101
    100

## Hint

如果你还是不太理解格雷码的构造，下图是从 $2$ 位格雷码构造 $3$ 位格雷码的示意图。

![image-20230916182000156](http://cos.pansis.club/202309161820224.png/abc123)
