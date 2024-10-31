# 向量计算器

时间限制：1000 ms / 空间限制：20480 KB / 难度：5

## 题目描述

GYCY为帮助懒惰的DeNeRATe线性代数不挂科，决定帮他制作一个向量计算器，给定三个向量 $\vec{r_1} = (a_1, a_2, a _3)  ,\, \vec{r_2} = (b_1, b_2, b_3),\, \vec{r_3} = (c_1, c_2, c_3)$ ，它能进行**6种**向量计算：

1. 向量加法： $\vec{r_1} + \vec{r_2} = (a_1+b_1 , a_2+b_2 , a_3+b_3)$
2. 向量减法：$\vec{r_1} - \vec{r_2} = (a_1-b_1 , a_2-b_2 , a_3-b_3)$
3. 向量内积：$\vec{r_1} \cdot \vec{r_2} = a_1 \times b_1 + a_2 \times b_2 + a_3 \times b_3$
4. 向量外积：$\vec{r_1} \times \vec{r_2} = (a_2b_3-a_3b_2\ ,\ a_3b_1-a_1b_3\ ,\ a_1b_2-a_2b_1)$
5. 向量混合积：$(\vec{r_1}\times\vec{r_2})\ \cdot\ \vec{r_3}=a_1b_2c_3+a_2b_3c_1+a_3b_1c_2-a_3b_2c_1-a_2b_1c_3-a_1b_3c_2 $
6. 向量双重外积：$(\vec{r_1}\times\vec{r_2})\times\vec{r_3}=(\vec{r_1}\cdot\vec{r_3})\cdot\vec{r_2}-(\vec{r_2}\cdot\vec{r_3})\cdot\vec{r_1}$

DeNeRATe非常想得知道结果，所以你只有**1秒**的时间。

## 输入

共三行，第一行三个数 $a_1,a_2,a_3$

第二行三个数 $b_1,b_2,b_3$

第三行三个数 $c_1,c_2,c_3$

输入和输出保证为 `long long int` 范围内整数，并且保证整个运算过程不会超出 `long long int` 范围

## 输出

输出六行，第一行 $\vec{r_1} + \vec{r_2}$ 结果

第二行 $\vec{r_3} - \vec{r_2}$ 结果

第三行 $\vec{r_3} \cdot \vec{r_2}$ 结果

第四行 $\vec{r_1} \times \vec{r_2}$ 结果

第五行 $(\vec{r_1}\times\vec{r_3})\ \cdot\ \vec{r_2}$ 结果

第六行 $(\vec{r_3}\times\vec{r_2})\times\vec{r_1}$ 结果

## 输入样例

    59 -93 36
    92 70 52
    31 87 49

## 输出样例

    151 -23 88
    -61 17 -3
    11490
    -7356 244 12686
    -414806
    -438306 -383590 -272606

---
*Author：GYCY*
