# 无幂之幂

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

作为八云蓝的式神，橙对计算机语言非常感兴趣，因此蓝教了她一些基础的C语言程序设计。

但是橙对函数的使用不是很熟练，还不能很好的理解函数的返回值是什么，因此她经常使用 `pow` 函数计算整型的幂，分不清 `abs` 和 `fabs` 的区别，导致代码出现了很多问题。

因此蓝留给橙一道作业，要她在不使用这几个函数的情况下计算整型的幂和绝对值：具体来说，给出若干组整数 $a,\ b$ 满足 $0 < a,b \leq 100$，计算 $|a^b-b^a|$ 的值。保证 $a^b$ 和 $b^a$ 都不会超过 `int` 的范围。

**如果橙的程序中出现了 `math.h` , `pow` , `abs` 这些字眼，蓝会狠心地打回橙的代码。**例如，你不应该使用 `empower` 作为变量名，这是因为它包含 **`pow`** 字眼。

请你帮帮橙完成这份作业吧！

## 输入格式

不定组数据输入

每一行输入为两个正整数 $a,b$

## 输出格式

对于每一行输出，输出一行，为 $|a^b-b^a|$ 的值

## 样例

### 输入样例

    1 3
    2 2
    5 6

### 输出样例

    2
    0
    7849

----------------

*Author:星辰的微光*