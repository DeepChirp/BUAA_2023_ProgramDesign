# 摩卡背单词

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

Moca's English is poor!

为了学好英语，Moca 开始了她的背单词计划。由于 Moca 的英语基础很差，她决定从四个字母的单词开始背起。为了提高效率，Moca 不想对同一个单词记忆两次，于是，她找到了你。

## 输入

第一行一个正整数 $n$ ，表示 Moca 要记忆的单词数，其中 $1 \le n \le 500000$。

接下来 $n$ 行，每行四个**小写字母**，表示一个单词。

## 输出

输出 $n$ 行，对应输入的 $n$ 个单词，如果这个单词之前已经出现过，输出 `Moca has already memorized this word!`；如果这个单词之前没有出现过，输出 `Moca memorized a new word!`。

## 输入样例

    6
    moca
    hina
    hina
    coso
    moca
    csoo

## 输出样例

    Moca memorized a new word!
    Moca memorized a new word!
    Moca has already memorized this word!
    Moca memorized a new word!
    Moca has already memorized this word!
    Moca memorized a new word!

## Hint

如果是给大家一串数字，让大家判断某数字之前是否出现过，我们可以用数组元素 $vis[i]$ 表示数字 $i$ 是否出现过，这样的话是不是很简单呢？

有没有什么办法能把四个字符转化为数字呢？

最后别忘了每一行都有换行符要处理啊 Σ(っ °Д °;)っ

Author : Moca