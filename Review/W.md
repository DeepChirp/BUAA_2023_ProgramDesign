# 超市促销

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

一家超市要进行促销活动，设置了一个长度为$L$的活动区域，活动需要将这块区域隔开成三种不同长度的区域。

三名员工一起工作，分别负责隔开一种长度的区域。从活动区域的左端开始，员工 $A$ 按照 $a$ 米距离间隔隔开一种长度的区域，员工 $B$ 按照 $b$ 米距离间隔隔开另一种长度的区域，员工 $C$ 按照 $c$ 米距离间隔隔开最后一种长度的区域。
如果恰好最后一个隔开的区域在$L$米处，请问，总共有多少种不同的隔开顺序。

## 输入

多组数据输入。

每行一组数据，四个整数，分别为 $a,b,c,L$ ，表示三名员工隔开区域的间隔长度和活动区域的总长。

满足 $5<a<b<c<L\leq400$ ，且 $a,b,c,L$ 均为为 $5$ 的整数倍。

## 输出

对于每组数据输出一行，一个整数，表示有多少种不同的隔开顺序。

## 输入样例

    10 15 20 40
    30 40 50 100

## 输出样例

    8
    4

## 样例解释

第一组数据，可能的隔开顺序有 $10,10,10,10$ 、$10,15,15$ 、$15,10,15$ 、$15,15,10$ 、$20,10,10$ 、$10,20,10$ 、$10,10,20$  、$20,20$ ，共 $8$ 种情况。

第二组数据，可能的隔开顺序有 $30,30,40$ 、$30,40,30$ 、$40,30,30$ 、$50,50$ ，共 $4$ 种情况。

Author: $pyh$