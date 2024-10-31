# 导弹密码

时间限制：1000 ms / 空间限制：65536 KB / 难度：7

## 题目描述

邪恶的DeNeRATe为达到他不可告人的秘密，向某地区发射了一枚物质泯灭导弹，为阻止DeNeRATe的阴谋，你向先知GYCY求助，GYCY告诉你，这枚导弹内部有一个长度为 $n$ 的自然数序列 $a_1, a_2, \cdots, a_n$，你需要将其划分为 $m$ 段连续的区间，使得 $passworld$ 值**最小**，$passworld$ 即为**终止导弹的密码**。 $passworld$ 定义如下：

$$
passworld=(a_1 \oplus a_2 \oplus \cdots \oplus a_{x_1})\vee(a_{x_1+1} \oplus a_{x_1+2} \oplus \cdots \oplus a_{x_2})\vee \\ \cdots \vee(a_{x_{m-1}+1} \oplus a_{x_{m-1}+2} \oplus \cdots \oplus a_n)
$$

其中，符号 $\oplus, \vee$ 分别表示按位异或和按位或运算

## 输入

第一行，两个正整数 $n, m$ ，保证 $1 \leq m \leq n \leq 10^5$

第二行，$n$ 个自然数 $a_1, a_2, \cdots, a_n$ ，保证均在 `unsigned int` 范围内

## 输出

一行，表示导弹的终止密码

### 输入样例

    5 3
    9 5 2 7 1

### 输出样例

    9

**Author：GYCY**
