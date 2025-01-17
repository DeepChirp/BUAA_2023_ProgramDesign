# 摩卡与主唱 2024

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

作为乐队的主唱，Ykn 和 Ran 对音乐有着不同的理解。

Ykn 在听一首音乐时，会格外关注音乐中**高音转低音**的部分；Ran 在听一首音乐时，会格外关注音乐中**低音转高音**的部分。在听完一次演唱会后，二人对其中的一首曲子格外感兴趣，经过讨论后，二人发现这首曲子所有音符**只由高音和低音组成**，且其中的**高音转低音次数和低音转高音次数是完全相同的**。但是二人只能回忆起其中的部分音符。

为了能还原这首曲子，Ykn 和 Ran 找到了会编程的 Moca。

## 输入

第一行一个正整数 $n$ ，表示曲子音符的个数，$1 \le n \le 100000$ 。

第二行 $n$ 个字符，表示 $n$ 个音符，每个音符只有 $1 \enspace 0 \enspace ?$ 三种可能的输入，分别表示这个音符是高音音符，低音音符以及回忆不起来的音符。

## 输出

输出 $1$ 行，代表原曲有多少种可能（由于两个人的记忆可能存在偏差，所以结果为 $0$ 也是有可能的），**由于结果可能很大，你需要将正确的答案对 $10^9 + 7$ 取模后输出。**

## 输入样例

    5
    1?001

## 输出样例

    2

## 样例解释

若想符合条件，原曲有 $11001$ 和 $10001$ 两种可能。

Author：Moca
