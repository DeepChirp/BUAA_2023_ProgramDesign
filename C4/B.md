# AMI编码

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目背景

这天霙在生物教室无所事事，突然发现了伞哥哥用长笛的反光给她发送的消息。这引起了她对《通信原理》的兴趣。

对于一条由`01`串组成的消息来说，其纠错能力往往很弱。为了对抗信道可能产生的误码，人们创造了各种各样的编码方法，而AMI码就是其中的一种。

## 题目描述

给出一个由 `0` 和 `1` 组成的二进制码，将原始二进制码中的符号`1`依次交替替换为 `+1` 和 `-1` ，而符号 `0` 保持不变。

其实这就是 AMI 码（Alternate Mark Inversion，信号交替反转编码）

## 输入格式

输入一个长度不超过 $1000$ 的原始二进制码，只由 `0` 或 `1` 组成。

## 输出格式

输出转换后的结果，要求每个数之间空一格，保留 `+1` 中的 `+` 号。

## 输入样例

    011010010111

## 输出样例

    0 +1 -1 0 +1 0 0 -1 0 +1 -1 +1

## Hint

关于读入，可以使用 `getchar` 读入每一位；也可以使用 `scanf` ，格式化字符串可能会用到 `%c` 或 `%1d` 。

回忆一下如何使用 EOF 判断输入是否结束？