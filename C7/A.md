# 我怎可将你与夏日比拟？

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

“第18号十四行诗”是莎士比亚最著名的十四行诗之一，全文如下：

    Shall I compare thee to a summer's day?
    Thou art more lovely and more temperate:
    Rough winds do shake the darling buds of May,
    And summer's lease hath all too short a date;
    Sometime too hot the eye of heaven shines,
    And often is his gold complexion dimm'd;
    And every fair from fair sometime declines,
    By chance or nature's changing course untrimm'd;
    But thy eternal summer shall not fade,
    Nor lose possession of that fair thou ow'st;
    Nor shall death brag thou wander'st in his shade,
    When in eternal lines to time thou grow'st:
        So long as men can breathe or eyes can see,
        So long lives this, and this gives life to thee.

对于给定的 $n$ ，请你输出它的第 $n$ 行。

## 输入

**不定组数据输入**，保证输入组数不超过 $30$。

每组数据输入一行一个正整数 $n$，保证 $1\le n \le 14$。

## 输出

每组数据输出一行字符串，表示第 $n$ 行。

## 输入样例

    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11
    12
    13
    14

## 输出样例

    Shall I compare thee to a summer's day?
    Thou art more lovely and more temperate:
    Rough winds do shake the darling buds of May,
    And summer's lease hath all too short a date;
    Sometime too hot the eye of heaven shines,
    And often is his gold complexion dimm'd;
    And every fair from fair sometime declines,
    By chance or nature's changing course untrimm'd;
    But thy eternal summer shall not fade,
    Nor lose possession of that fair thou ow'st;
    Nor shall death brag thou wander'st in his shade,
    When in eternal lines to time thou grow'st:
        So long as men can breathe or eyes can see,
        So long lives this, and this gives life to thee.

## Hint

使用二维数组存储字符串吧！显然每行的字符数量均小于100。

第13行和第14行要输出前面的空格哦~

*Author:* $\mathcal{\text{David Tong}} $
