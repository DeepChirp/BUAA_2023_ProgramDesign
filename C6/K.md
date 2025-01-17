# 2023 Mid - 收集春度

时间限制：1000 ms / 空间限制：65536 KB

## 题目背景

隆冬。

Hakurei Reimu 穿过幽明结界，正飞行在漫无止境的白玉楼阶梯上，找回幻想乡被夺走的春度。

## 题目描述

再长的阶梯也有尽头，Reimu 从第 $0$ 阶爬上第 $n$ 阶方可抵达冥界中央的白玉楼。为了节省时间，Reimu 使用她的亚空穴进行空间传送。当她处于第 $i$ 阶时，她可以传送到 $[i+l,i+r]$ 中的任意一阶上。

春意盎然的冥界充满了春度，每一阶上都有着 $a_i$ 的春度，不过第 $0$ 阶上没有。Reimu 每次传送之后都将获得当前阶梯上的春度。为了恢复樱花盛开的幻想乡，Reimu 需要在抵达白玉楼时收集尽可能多的春度。

Reimu 从第 $0$ 阶开始往上爬，只要她下一次传送后的阶梯编号大于 $n$ 就算抵达白玉楼。

## 输入

第一行三个正整数 $n,l,r$，含义见上；

第二行共 $n+1$ 个整数，第 $i$ 个数表示第 $i−1$ 阶的春度 $a_{i−1}$。

## 输出

一个整数，表示抵达白玉楼时的最多春度。

## 输入样例

    7 2 2
    0 7 4 5 8 1 -5 -5

## 输出样例

    7

## 数据范围

对于 $60\%$ 的数据，$n≤10^4$；

对于 $100\%$ 的数据，$0<n≤2×10^5$，$|a_i|≤10^3$，$1≤l≤r≤n$。