# violet 求最大和

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

给定一个 $m \times n$ 的矩阵，保证 $m, n \geq 3$ ，则其至少存在一个 $3 \times 3$ 的子矩阵，在此基础上，定义一种特殊的**字母型子矩阵**，图示如下：

|  $V$  |  _**`a1`**_  |  0  |  _**`b1`**_  |  $I$  |  0  |  _**`a2`**_  |  0  |  $O$  |  _**`a3`**_  |  _**`b3`**_  |  _**`c3`**_  |
| --- | ---  | --- | --- | --- | ---  | --- | --- | --- | --- | --- | --- |
|     |  _**`c1`**_  |  0  |  _**`d1`**_  |     |  0  |  _**`b2`**_  |  0  |     |  _**`d3`**_  |  0  |  _**`e3`**_  |
|     |  0  |  _**`e1`**_  |  0  |     |  0  |  _**`c2`**_  |  0  |     |  _**`f3`**_  |  _**`g3`**_  |  _**`h3`**_  |

|  $L$  |  _**`a4`**_  |  0  |  0  |  $E$  |  _**`a5`**_  |  _**`b5`**_  |  _**`c5`**_  |  $T$  |  _**`a6`**_  |  _**`b6`**_  |  _**`c6`**_  |
| --- | ---  | --- | --- | --- | ---  | --- | --- | --- | --- | --- | --- |
|     |  _**`b4`**_  |  0  |  0  |     |  _**`d5`**_  |  _**`e5`**_  |  _**`f5`**_  |     |  0  |  _**`d6`**_  |  0  |
|     |  _**`c4`**_  |  _**`d4`**_  |  _**`e4`**_  |     |  _**`g5`**_  |  _**`h5`**_  |  _**`i5`**_  |     |  0  |  _**`e6`**_  |  0  |

定义 $V$ 型子矩阵的和为 $a1 +...+ e1$ ， $I$ 型子矩阵的和为 $a2 + b2 + c2$ 以此类推

请你找到**和最大**的字母型子矩阵，并输出字母型子矩阵的和以及**对应的字母**，若有多个字母均能构成这个最大和，则按照 VIOLET 的顺序**依次输出**这些字母

**注意**：子矩阵**无法旋转**且必须**整个**包含在矩阵中。

## 输入

第一行为矩阵的行数 $m$ 和列数 $n$ ，保证 $3 \leq m, n \leq 1000$

接下来 $m$ 行，每行 $n$ 个整数 $x$ ，保证 $-10^8 \leq x \leq 10^8$

## 输出

第一行一个数字，代表最大和

第二行一个字符串，代表能构成这个最大和的所有字母

## 输入样例1

    3 3
    1 1 1
    1 1 1
    1 1 1

## 输出样例1

    9
    E

## 输入样例2

     4  4
     5 -8 5 -8
     5  5 5  5
    -8  5 5 -8
    -8 -8 5 -8

## 输出样例2

    25
    VT

## 样例解释

样例一，每个字母对应的字母型子矩阵只能有一个，$V,I,O,L,E,T$ 六个子矩阵和分别为 $5, 3, 8, 5, 9, 5$ 故输出最大值 $9$ 和对应的字母 $E$

样例二，每个字母对应的子矩阵有左上，右上，左下，右下，共四个。分别的矩阵和为

$V : 25, -1, -1, 12$ 最大和为25

$I : 2, 15, 2, 15$ 最大和为15

$O : 14, 1, 1, 1$ 最大和为14

$L : 12, -1, -14, -1$ 最大和为12

$E : 19, 6, 6,6$ 最大和为19

$T : 12, -1, 12, 25$ 最大和为25

故最大矩阵和为25，能构成这个最大和的字母有 $V，T$ 按顺序输出即可，最大子矩阵在图中的位置如下

|  _**`a1`**_   | 0 |  _**`b1`**_   |  0  |
| --- | ---  | --- | --- |
|  _**`c1`**_   |  0 |  _**`d1`**_  |0  |
|   0  |  _**`e1`**_   |  0 |  0 |
|  0   |  0  | 0  |  0  |

|  0  | 0 | 0  |  0  |
| --- | ---  | --- | --- |
|  0  |  _**`a6`**_  |  _**`b6`**_  |_**`c6`**_   |
|   0  |  0   |  _**`d6`**_  |  0 |
|  0   |  0  | _**`e6`**_   |  0  |

_Author : violet_