# 魔法实验 3.0

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

Kirisame Marisa 在弹幕游戏中败给了 Patchouli Knowledge ，因为 Patchouli 使用的魔法太强大了，她能熟练的使用七种属性（火、水、木、金、土、日、月）的魔法。Marisa 希望精进自己的魔法水平，在她的央求下， Patchouli 同意给她演示两种属性（火、水）魔法的实验。

## 题目描述

Patchouli 从她的七曜水晶中挑选出了火和水两种属性的水晶，同一些没有注入魔力的空水晶一起排成了一字法阵。水晶共 $n$ 个，从左往右依次编号为 $1,\dots,n$，每个空水晶都可以注入火或水的魔力。其中，有 $f$ 个水晶已经注入了火魔力，这些水晶的编号分别为 $x_1,\dots,x_f$；有 $w$ 个水晶已经注入了水魔力，这些水晶的编号分别为 $y_1,\dots,y_w$。

现在，Patchouli 需要向空水晶中注入火或水魔力。为了使不同的魔力交汇在一起，释放出更强的能量，她需要让有相同属性的相邻水晶对的数量最少。

例如，若用 ${\color{red}{\blacksquare}}$ 表示火属性水晶，${\color{blue}{\blacksquare}}$ 表示水属性水晶，$\square$ 表示空水晶，$n=7$ 时初始水晶法阵状态为 $\square{\color{red}{\blacksquare}}\square\square\square\color{blue}{\blacksquare}\color{red}{\blacksquare}$ ，注入魔力后 $\color{blue}{\blacksquare}\color{red}{\blacksquare}\color{red}{\blacksquare}\color{blue}{\blacksquare}\color{red}{\blacksquare}\color{blue}{\blacksquare}\color{red}{\blacksquare}$ 为最优方案之一，有相同属性的相邻水晶对仅为 $\square{\color{red}{\blacksquare}\color{red}{\blacksquare}}\square\square\square\square$，因此有相同属性的相邻水晶对的数量最小值为 $1$。

Patchouli 当然知道如何释放出更强的能量，但她想考考 Marisa 对这个魔法的了解程度。

## 输入

第一行，三个非负整数 $n,f,w$，表示总水晶数，初始火属性水晶数，初始水属性水晶数；

第二行，$f$ 个正整数 $x_1,\dots,x_f$，表示初始火属性水晶编号；

第三行，$w$ 个正整数 $y_1,\dots,y_w$，表示初始水属性水晶编号。

特别地，若 $f=0$，则输入第二行为空行；若 $w=0$，则输入第三行为空行。

## 输出

一行，一个整数，表示相同属性的相邻水晶对的数量最小值。

## 样例

### 输入 #1

    10 0 1

    7

### 输出 #1

    0

### 输入 #2

    7 2 1
    7 2
    6

### 输出 #2

    1

## 数据范围

对于全部数据，$1\leq n\leq 10^5$，$0\leq f+w\leq n$，$1\leq x_i,y_i\leq n$。
