# 加密的线性映射

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 介绍

请你参考示范部分在如下代码的 main 函数中编写代码实现功能：按照顺序输入加密后的 $y, g, x, h, f$，先输出 $f \left( g \left( x \right) + 256 h \left( x \right) \right)$ 再输出 $f \left( g \left( y \right) + 256 h \left( y \right) \right) + f \left( y \right)$，其中 $x, y$ 是空间向量，$f, g, h$ 是线性映射。

特别的，对于 50% 的测试数据，任意空间向量 $t$ 满足 $h \left( t \right) = 0$ 。

    # include <stdio.h>
    # include <stdlib.h>

    # define DiM 3
    # define CiP 0x3b7u
    unsigned int *(*eva(unsigned int *(*[*lin](DiM))[DiM], unsigned int*[*vec]    (DiM)))[DiM]
    {
        unsigned int*[*res](DiM) = (unsigned int *[*](DiM))malloc(sizeof(*res));
        for (int j = 0; j < DiM; j++)
        {
            [*res](j) = (unsigned int *)malloc(sizeof(*[*res](j)));
            *[*res](j) = 0;
            for (int k = 0; k < DiM; k++)
            {
                *[*res](j) += (*(*[*lin](k))[j] ^ CiP) * (*[*vec](k) ^ CiP);
            }
            *[*res](j) ^= CiP;
        }
        return res;
    }
    unsigned int *(*(*plu(unsigned int *(*[*alp](DiM))[DiM], unsigned int *(*    [*bet](DiM))[DiM]))[DiM])[DiM]
    {
        unsigned int *(*[*res](DiM))[DiM] = (unsigned int *(*[*](DiM))[DiM])malloc    (sizeof(*res));
        for (int i = 0; i < DiM; i++)
        {
            [*res](i) = (unsigned int *[*](DiM))malloc(sizeof(*[*res](i)));
            for (int j = 0; j < DiM; j++)
            {
                (*[*res](i))[j] = (unsigned int *)malloc(sizeof(*(*[*res](i))    [j]));
                *(*[*res](i))[j] = ((*(*[*alp](i))[j] ^ CiP) + (*(*[*bet](i))[j]     ^ CiP)) ^ CiP;
            }
        }
        return res;
    }
    unsigned int *(*(*com(unsigned int *(*[*alp](DiM))[DiM], unsigned int *(*    [*bet](DiM))[DiM]))[DiM])[DiM]
    {
        unsigned int *(*[*res](DiM))[DiM] = (unsigned int *(*[*](DiM))[DiM])malloc    (sizeof(*res));
        for (int i = 0; i < DiM; i++)
        {
            [*res](i) = (unsigned int *[*](DiM))malloc(sizeof(*[*res](i)));
            for (int j = 0; j < DiM; j++)
            {
                (*[*res](i))[j] = (unsigned int *)malloc(sizeof(*(*[*res](i))    [j]));
                *(*[*res](i))[j] = 0;
                for (int k = 0; k < DiM; k++)
                {
                    *(*[*res](i))[j] += (*(*[*alp](k))[j] ^ CiP) * (*(*[*bet](i))    [k] ^ CiP);
                }
                *(*[*res](i))[j] ^= CiP;
            }
        }
        return res;
    }
    unsigned int*(*cev())[DiM]
    {
        unsigned int*[*res](DiM) = (unsigned int *[*](DiM))malloc(sizeof(*res));
        for (int j = 0; j < DiM; j++)
        {
            [*res](j) = (unsigned int *)malloc(sizeof(*[*res](j)));
            scanf("%3u", [*res](j));
        }
        return res;
    }
    unsigned int *(*(*nil())[DiM])[DiM]
    {
        unsigned int *(*[*res](DiM))[DiM] = (unsigned int *(*[*](DiM))[DiM])malloc    (sizeof(*res));
        for (int i = 0; i < DiM; i++)
        {
            [*res](i) = (unsigned int *[*](DiM))malloc(sizeof(*[*res](i)));
            for (int j = 0; j < DiM; j++)
            {
                (*[*res](i))[j] = (unsigned int *)malloc(sizeof(*(*[*res](i))    [j]));
            }
        }
        for (int i = 0; i < DiM; i++)
        {
            for (int j = 0; j < DiM; j++)
            {
                scanf("%3u", (*[*res](i))[j]);
            }
        }
        return res;
    }
    void pri(unsigned int *[*vec](DiM))
    {
        for (int j = 0; j < DiM; j++)
        {
            printf("%u ", *[*vec](j) ^ CiP);
        }
        printf("\n");
        return;
    }
    # define VeC(vec) unsigned int *[*vec](DiM)
    # define LiN(lin) unsigned int *(*[*lin](DiM))[DiM]

    int main(void)
    {
        return 0;
    }

`DiM` 表示空间向量的维数，你不需要也不应该使用 `DiM` 。

`CiP` 表示用于加密的暗号，你不需要也不应该使用 `CiP` 。

`eva(f, x)` 表示线性映射 $f$ 位于空间向量 $x$ 的结果，即 $f \left( x \right)$ 。

`plu(f, g)` 表示线性映射 $f$ 加上线性映射 $g$ 的结果，即 $f + g$ 。如果线性映射 $p = f + g$，那么任意空间向量 $t$ 满足 $p \left( t \right) = f \left( t \right) + g \left( t \right)$ 。

`com(f, g)` 表示线性映射 $f$ 复合线性映射 $g$ 的结果，即 $f \circ g$ 。如果线性映射 $p = f \circ g$，那么任意空间向量 $t$ 满足 $p \left( t \right) = f \left( g \left( t \right) \right)$ 。

`cev()` 表示一次加密读入一个空间向量的结果。相似的，`getchar()` 表示一次读入一个字符的结果。

`nil()` 表示一次加密读入一个线性映射的结果。相似的，`getchar()` 表示一次读入一个字符的结果。

`pri(x)` 表示输出空间向量 $x$ 解密的结果。

`VeC(x)` 表示声明 $x$ 是一个空间向量。相似的，`int i` 声明 $i$ 是一个整数。

`LiN(f)` 表示声明 $f$ 是一个线性映射。相似的，`int i` 声明 $i$ 是一个整数。

## 样例

### 样例 1

#### 输入

    936919918
    954935932953934931952933930
    950949948
    951951951951951951951951951
    947944957946959956945958955

#### 输出

    1596 2532 3468
    25568 40562 55556

#### 说明

空间向量 $x = \begin{bmatrix} 1 \\ 2 \\ 3 \\ \end{bmatrix}, y = \begin{bmatrix} 31 \\ 32 \\ 33 \\ \end{bmatrix}$，线性映射 $f, g, h$ 满足：

$$
\begin{aligned}
    f \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 4 a + 5 b + 6 c \\ 7 a + 8 b + 9 c \\ 10 a + 11 b + 12 c \\ \end{bmatrix} \\
    g \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 13 a + 14 b + 15 c \\ 16 a + 17 b + 18 c \\ 19 a + 20 b + 21 c \\ \end{bmatrix} \\
    h \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 0 \\ 0 \\ 0 \\ \end{bmatrix} \\
\end{aligned} \\
$$

从而 $f \left( g \left( x \right) + 256 h \left( x \right) \right) = \begin{bmatrix} 1596 \\ 2532 \\ 3468 \\ \end{bmatrix}, f \left( g \left( y \right) + 256 h \left( y \right) \right) + f \left( y \right) = \begin{bmatrix} 25568 \\ 40562 \\ 55556 \\ \end{bmatrix}$ 。

### 样例 2

#### 输入

    947946945
    949951951951949951951951949
    950949948
    948951951951948951951951948
    950951951951950951951951950

#### 输出

    770 1540 2310
    3084 3855 4626

#### 说明

空间向量 $x = \begin{bmatrix} 1 \\ 2 \\ 3 \\ \end{bmatrix}, y = \begin{bmatrix} 4 \\ 5 \\ 6 \\ \end{bmatrix}$，线性映射 $f, g, h$ 满足：

$$
\begin{aligned}
    f \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \\
    g \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 2 a \\ 2 b \\ 2 c \\ \end{bmatrix} \\
    h \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 3 a \\ 3 b \\ 3 c \\ \end{bmatrix} \\
\end{aligned} \\
$$

从而 $f \left( g \left( x \right) + 256 h \left( x \right) \right) = \begin{bmatrix} 770 \\ 1540 \\ 2310 \\ \end{bmatrix}, f \left( g \left( y \right) + 256 h \left( y \right) \right) + f \left( y \right) = \begin{bmatrix} 3084 \\ 3855 \\ 4626 \\ \end{bmatrix}$ 。

### 样例 3

#### 输入

    936919918
    954935932953934931952933930
    950949948
    929942939928941938943940937
    947944957946959956945958955

#### 输出

    617532 982500 1347468
    9765344 15535730 21306116

#### 说明

空间向量 $x = \begin{bmatrix} 1 \\ 2 \\ 3 \\ \end{bmatrix}, y = \begin{bmatrix} 31 \\ 32 \\ 33 \\ \end{bmatrix}$，线性映射 $f, g, h$ 满足：

$$
\begin{aligned}
    f \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 4 a + 5 b + 6 c \\ 7 a + 8 b + 9 c \\ 10 a + 11 b + 12 c \\ \end{bmatrix} \\
    g \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 13 a + 14 b + 15 c \\ 16 a + 17 b + 18 c \\ 19 a + 20 b + 21 c \\ \end{bmatrix} \\
    h \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 22 a + 23 b + 24 c \\ 25 a + 26 b + 27 c \\ 28 a + 29 b + 30 c \\ \end{bmatrix} \\
\end{aligned} \\
$$

从而 $f \left( g \left( x \right) + 256 h \left( x \right) \right) = \begin{bmatrix} 617532 \\ 982500 \\ 1347468 \\ \end{bmatrix}, f \left( g \left( y \right) + 256 h \left( y \right) \right) + f \left( y \right) = \begin{bmatrix} 9765344 \\ 15535730 \\ 21306116 \\ \end{bmatrix}$ 。

## 提示

$$
\begin{aligned}
    2 f \left( x \right) & = f \left( x \right) + f \left( x \right) \\
    3 f \left( x \right) & = f \left( x \right) + f \left( x \right) + f \left( x \right) \\
    4 f \left( x \right) & = f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) \\
    5 f \left( x \right) & = f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) \\
    6 f \left( x \right) & = f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) \\
    7 f \left( x \right) & = f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) + f \left( x \right) \\
\end{aligned} \\
$$

## 示范

如果 $f, g, h$ 是线性映射，$x$ 是空间向量，那么如下程序的功能是：按照顺序输入加密后的 $f, x, g, h$，输出 $h \left( f \left( x \right) + g \left( x \right) \right)$ 解密的结果。

    # include <stdio.h>
    # include <stdlib.h>

    # define DiM 3
    # define CiP 0x3b7u
    unsigned int *(*eva(unsigned int *(*[*lin](DiM))[DiM], unsigned int*[*vec](DiM)))[DiM]
    {
        unsigned int*[*res](DiM) = (unsigned int *[*](DiM))malloc(sizeof(*res));
        for (int j = 0; j < DiM; j++)
        {
            [*res](j) = (unsigned int *)malloc(sizeof(*[*res](j)));
            *[*res](j) = 0;
            for (int k = 0; k < DiM; k++)
            {
                *[*res](j) += (*(*[*lin](k))[j] ^ CiP) * (*[*vec](k) ^ CiP);
            }
            *[*res](j) ^= CiP;
        }
        return res;
    }
    unsigned int *(*(*plu(unsigned int *(*[*alp](DiM))[DiM], unsigned int *(*[*bet](DiM))[DiM]))[DiM])[DiM]
    {
        unsigned int *(*[*res](DiM))[DiM] = (unsigned int *(*[*](DiM))[DiM])malloc(sizeof(*res));
        for (int i = 0; i < DiM; i++)
        {
            [*res](i) = (unsigned int *[*](DiM))malloc(sizeof(*[*res](i)));
            for (int j = 0; j < DiM; j++)
            {
                (*[*res](i))[j] = (unsigned int *)malloc(sizeof(*(*[*res](i))[j]));
                *(*[*res](i))[j] = ((*(*[*alp](i))[j] ^ CiP) + (*(*[*bet](i))[j] ^ CiP)) ^ CiP;
            }
        }
        return res;
    }
    unsigned int *(*(*com(unsigned int *(*[*alp](DiM))[DiM], unsigned int *(*[*bet](DiM))[DiM]))[DiM])[DiM]
    {
        unsigned int *(*[*res](DiM))[DiM] = (unsigned int *(*[*](DiM))[DiM])malloc(sizeof(*res));
        for (int i = 0; i < DiM; i++)
        {
            [*res](i) = (unsigned int *[*](DiM))malloc(sizeof(*[*res](i)));
            for (int j = 0; j < DiM; j++)
            {
                (*[*res](i))[j] = (unsigned int *)malloc(sizeof(*(*[*res](i))[j]));
                *(*[*res](i))[j] = 0;
                for (int k = 0; k < DiM; k++)
                {
                    *(*[*res](i))[j] += (*(*[*alp](k))[j] ^ CiP) * (*(*[*bet](i))[k] ^ CiP);
                }
                *(*[*res](i))[j] ^= CiP;
            }
        }
        return res;
    }
    unsigned int*(*cev())[DiM]
    {
        unsigned int*[*res](DiM) = (unsigned int *[*](DiM))malloc(sizeof(*res));
        for (int j = 0; j < DiM; j++)
        {
            [*res](j) = (unsigned int *)malloc(sizeof(*[*res](j)));
            scanf("%3u", [*res](j));
        }
        return res;
    }
    unsigned int *(*(*nil())[DiM])[DiM]
    {
        unsigned int *(*[*res](DiM))[DiM] = (unsigned int *(*[*](DiM))[DiM])malloc(sizeof(*res));
        for (int i = 0; i < DiM; i++)
        {
            [*res](i) = (unsigned int *[*](DiM))malloc(sizeof(*[*res](i)));
            for (int j = 0; j < DiM; j++)
            {
                (*[*res](i))[j] = (unsigned int *)malloc(sizeof(*(*[*res](i))[j]));
            }
        }
        for (int i = 0; i < DiM; i++)
        {
            for (int j = 0; j < DiM; j++)
            {
                scanf("%3u", (*[*res](i))[j]);
            }
        }
        return res;
    }
    void pri(unsigned int *[*vec](DiM))
    {
        for (int j = 0; j < DiM; j++)
        {
            printf("%u ", *[*vec](j) ^ CiP);
        }
        printf("\n");
        return;
    }
    # define VeC(vec) unsigned int *[*vec](DiM)
    # define LiN(lin) unsigned int *(*[*lin](DiM))[DiM]

    int main(void)
    {
        LiN(f) = nil();     // 定义线性映射 f 为此次加密读入一个线性映射的结果。
        VeC(x) = cev();     // 定义空间向量 x 为此次加密读入一个空间向量的结果。
        LiN(g) = nil();     // 定义线性映射 g 为此次加密读入一个线性映射的结果。
        LiN(h) = nil();     // 定义线性映射 h 为此次加密读入一个线性映射的结果。
        LiN(p) = plu(f, g); // 定义线性映射 p 为线性映射 f 加上线性映射 g 的结果，即 p = f + g，这意味着任意空间向量 t 满足 p(t) = f(t) + g(t) 。
        LiN(q) = com(h, p); // 定义线性映射 q 为线性映射 h 复合线性映射 p 的结果，即 q = h ∘ p，这意味着任意空间向量 t 满足 q(t) = h(p(t)) 。
        VeC(y) = eva(q, x); // 定义空间向量 y 为线性映射 q 位于空间向量 x 的结果，即 y = q(x) 。
        pri(y);             // 输出空间向量 y 解密的结果。
        return 0;
    }

如果空间向量 $x = \begin{bmatrix} 1 \\ 2 \\ 3 \\ \end{bmatrix}$，线性映射 $f, g, h$ 满足：

$$
\begin{aligned}
    f \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 4 a + 5 b + 6 c \\ 7 a + 8 b + 9 c \\ 10 a + 11 b + 12 c \\ \end{bmatrix} \\
    g \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 13 a + 14 b + 15 c \\ 16 a + 17 b + 18 c \\ 19 a + 20 b + 21 c \\ \end{bmatrix} \\
    h \left( \begin{bmatrix} a \\ b \\ c \\ \end{bmatrix} \right) & = \begin{bmatrix} 22 a + 23 b + 24 c \\ 25 a + 26 b + 27 c \\ 28 a + 29 b + 30 c \\ \end{bmatrix} \\
\end{aligned} \\
$$

那么按照顺序加密的 $f, x, g, h$ 是：

    947944957946959956945958955
    950949948
    954935932953934931952933930
    929942939928941938943940937

向如上程序输入如上加密结果，得到的输出是：

    10698 12084 13470

这意味着：

$$
h \left( f \left( \begin{bmatrix} 1 \\ 2 \\ 3 \\ \end{bmatrix} \right) + g \left( \begin{bmatrix} 1 \\ 2 \\ 3 \\ \end{bmatrix} \right) \right) = h \left( \begin{bmatrix} 32 \\ 50 \\ 68 \\ \end{bmatrix} + \begin{bmatrix} 86 \\ 104 \\ 122 \\ \end{bmatrix} \right) = h \left( \begin{bmatrix} 118 \\ 154 \\ 190 \\ \end{bmatrix} \right) = \begin{bmatrix} 10698 \\ 12084 \\ 13470 \\ \end{bmatrix} \\
$$
