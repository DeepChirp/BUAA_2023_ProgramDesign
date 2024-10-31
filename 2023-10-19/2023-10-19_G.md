# 戎璎花的汉诺塔

时间限制：1000 ms / 空间限制：65536 KB / 难度：5

*参考教材例5-16*

## 题目描述

戎璎花今天也在赛之河原开心的举行着堆石子比赛，今天的主题是**汉诺塔**！

戎璎花热情的邀请你来当解说员，解说她玩汉诺塔的过程！

在比赛过程中有:

1. 比赛使用的是三柱汉诺塔，这三个柱子各有标记，分别为一个大写字母。
2. 在左边的柱上有 $n$ 个圆盘，从上到下，每个圆盘依次被编号为：$1,2,3,...,n$
3. 戎璎花一次只能搬动一片圆盘
4. 每个圆盘只能放在编号更大的圆盘之上
5. 戎璎花是垒石头的高手！她会以最少的步数将汉诺塔移到最右边的柱子上！

## 输入格式

输入为两行

第一行为三个以空格分开的大写字母 $C_1,\ C_2,\ C_3$ ，分别为左，中，右三个石柱的标记

第二行为一个整数 $1 \leq n \leq 18$ ，为汉诺塔的层数

## 输出格式

输出若干行

对于戎璎花的每次搬动，输出一行

`Eika moved Koishi {圆盘编号} form the {初始位置} to the {目的位置}`

其中圆盘编号输出**两位**，不足则补充**前导零**

## 样例输入

    L M R
    3

## 样例输出

    Eika moved Koishi 01 form the L to the R
    Eika moved Koishi 02 form the L to the M
    Eika moved Koishi 01 form the R to the M
    Eika moved Koishi 03 form the L to the R
    Eika moved Koishi 01 form the M to the L
    Eika moved Koishi 02 form the M to the R
    Eika moved Koishi 01 form the L to the R

## *Hint*

很经典的递归对吧，课本或者PPT上应该就有(´▽`)ﾉ

输出时， `printf` 的格式化字符串建议复制以下内容：

`"Eika moved Koishi %02d form the %c to the %c\n"`

注意前导零哦

如果你自己写递归函数的话，注意一点：递归需要初始/边界状态才能够得到递归结果，否则会陷入无限的自我调用的。

*另外提一嘴，`main` 函数是可以自我调用的，虽然在这里不是很用得上*

-------

*Author:星辰的微光*
