# 狂饮之宴

时间限制：1000 ms / 空间限制：65536 KB / 难度：7

## *题目背景*

*伊吹萃香今天也在博丽神社的酒会上喝酒！萃香是鬼族，而众所周知鬼族是喝酒和比赛的狂热爱好者。现在，萃香想要灌倒每一个对手！接着奏乐接着舞！*

## 题目描述

长条桌上依次坐着 $n$ 个参加酒会的客人，他们的酒量分别为 $c_1,c_2,\ldots,c_n$

萃香将**自左向右**经过每一个客人，并决定是否灌倒这位客人。

鬼族是非常能喝酒的种族，所以萃香一定能灌倒她选择的**第一位**客人。

但对于之后的客人，由于不支酒力，萃香灌倒的客人必须酒量**不如**或者**持平**上一位被灌倒的客人。

请问萃香**最多**能灌倒几位客人？

## 输入格式

输入为两行

第一行为一个正整数 $n$ 满足 $1 \leq n \leq 5000$ ，表示客人的数量。

第二行为 $n$ 个以空格分隔的正整数 $c_i$ 满足 $1 \leq c_i \leq 10000$ ，代表自左向右每位客人的酒量。

## 输出格式

输出一个正整数 $k$ ，为萃香**最多**能灌倒的客人的数量。

## 样例

### 输入样例

    10
    2 2 7 9 4 9 3 2 3 2

### 输出样例

     5

### 样例解析

萃香分别灌倒第 $4,5,7,8,10$ 位客人，共计 $5$ 位客人，此方法能灌倒的客人最多

## *Hint*

这是经典的最长递减子序列问题，也就是『从数列中删去若干个元素，使得剩下的元素递减(本题为不递增)且最长』

可以试着从简单的情况考虑，例如：如果萃香只从最初的两位客人中选择灌倒的人，她能灌倒几位？

如果只从最初的三位、四位、五位……中选择呢？

已知前 $n-1$ 位客人的情况，如何推导出前 $n$ 位的情况呢

*另外提一嘴，虽然萃香自己肯定会从酒量最高的客人开始挑战——但这种方法真的是灌倒最多人的策略吗？*

-------
*Author:星辰的微光*