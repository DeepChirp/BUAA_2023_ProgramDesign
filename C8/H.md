# 哪吒玩汉诺塔

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

哪吒喜欢玩汉诺塔，但是他总记不住第几步应该移动哪个圆盘，你能帮帮他吗？

给出汉诺塔的层数 $m$ 和移动步数 $n$  ，求在移动一个 $m$ 层汉诺塔的过程中，第 $n$ 步是在移动第几小的圆盘（即最初汉诺塔从上到下的第几层圆盘）。

如果忘记了汉诺塔的规则可以参考 **Hint** 。

## 输入

**本题存在多组输入数据。**对于每组数据：

输入一行两个正整数 $m, n$ ，保证 $1\le m\le60, \ 1\le n\le 2^{m}-1$ 。

保证数据组数不超过 $10000$ 。

## 输出

对于每组数据，输出一行一个正整数 $k$ ，表示在移动一个 $m$ 层汉诺塔的过程中第 $n$ 步是在移动第 $k$ 小的圆盘。

## 输入样例

    2 2
    1 1

## 输出样例

    2
    1

## 样例解释

移动 $2$ 层汉诺塔的方法如下：

第 $1$ 步：将第 $1$ 小的圆盘从 $A$ 柱移动到 $B$ 柱；

第 $2$ 步：将第 $2$ 小的圆盘从 $A$ 柱移动到 $C$ 柱；

第 $3$ 步：将第 $1$ 小的圆盘从 $B$ 柱移动到 $C$ 柱。

其中第 $2$ 步是在移动第 $2$ 小的圆盘，故输出 $2$ 。

移动 $1$ 层汉诺塔只需要移动 $1$ 步，将第 $1$ 小的圆盘从 $A$ 柱移动到 $C$ 柱，因此输出 $1$ 。

## Hint

关于汉诺塔的规则：有三根柱子 $A, B, C$ ，最初在 $A$ 柱上从上到下按照从小到大的顺序摞着 $m$ 层圆盘。现在需要把这 $m$ 层圆盘按照相同顺序重新摆放在 $C$ 柱上，每一步移动只能在三根柱子之间移动一个圆盘，并且规定在小圆盘上不能放大圆盘。

移动汉诺塔的方法为：先将 $m-1$ 层汉诺塔从 $A$ 柱移动到 $B$ 柱，再将第 $m$ 层圆盘从 $A$ 柱移动到 $C$ 柱，再将 $m-1$ 层汉诺塔从 $B$ 柱移动到 $C$ 柱，共需要 $2^m-1$ 次移动。

尝试用递归解决本题吧~