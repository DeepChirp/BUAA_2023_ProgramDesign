# 基于快速数论变换的加密算法

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

注意到：

$$
\begin{cases}
    c = a + b \\\
    d = a - b
\end{cases}
\iff
\begin{cases}
    a = \frac{1}{2} \left( c + d \right) \\\
    b = \frac{1}{2} \left( c - d \right)
\end{cases}
$$

我们可以设计如下的加密算法：

    #include <stdio.h>
    int main(void) {
        int a, b;
        scanf("%d%d", &a, &b);
        int c = (a + 1 * b) % 5;
        int d = (a + 4 * b) % 5;
        printf("%d %d", c, d);
        return 0;
    }

这个加密算法对应的解密算法如下：

    #include <stdio.h>
    int main(void) {
        int c, d;
        scanf("%d%d", &c, &d);
        int a = (c + 1 * d) * 3 % 5;
        int b = (c + 4 * d) * 3 % 5;
        printf("%d %d", a, b);
        return 0;
    }

类似的，请你设计如下加密算法对应的解密算法：

    #include <stdio.h>
    int main(void) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int e = (a + 1 * c) % 5;
        int f = (b + 1 * d) % 5;
        int g = (a + 4 * c) % 5;
        int h = (b + 4 * d) % 5;
        int i = (e + 1 * f) % 5;
        int j = (e + 4 * f) % 5;
        int k = (g + 2 * h) % 5;
        int l = (g + 3 * h) % 5;
        printf("%d %d %d %d", i, j, k, l);
        return 0;
    }

## 输入

$4$ 个用空格分隔的小于 $5$ 的自然数 $i, j, k, l$。

## 输出

$4$ 个用空格分隔的小于 $5$ 的自然数 $a, b, c, d$。

## 输入样例

    0 1 2 3

## 输出样例

    4 4 4 3

## 拓展思考

Alpha 版代码：

    // version Alpha
    #include <stdio.h>
    int main(void) {
        float c, d;
        scanf("%f%f", &c, &d);
        float a = (c + d) / 2.0;
        float b = (c - d) / 2.0;
        printf("%f %f", a, b);
        return 0;
    }

Beta 版代码：

    // version Beta
    #include <stdio.h>
    int main(void) {
        float c, d;
        scanf("%f%f", &c, &d);
        float a = (c + d) / 2.0;
        float b = c - a;
        printf("%f %f", a, b);
        return 0;
    }

Gamma 版代码：

    // version Gamma
    #include <stdio.h>
    int main(void) {
        float c, d;
        scanf("%f%f", &c, &d);
        float t;
        t = (c + d) / 2.0;
        printf("%f ", t);
        t = (c - d) / 2.0;
        printf("%f",  t);
        return 0;
    }

对并行计算感兴趣的同学可以思考：与 Beta 版代码相比，Alpha 版代码有什么优势？（提示：对 `a` 的赋值与对 `b` 的赋值是否有依赖关系）

对函数式编程感兴趣的同学可以思考：与 Gamma 版代码相比，Alpha 版代码有什么优势？（提示：`t` 的语义是否是不变的）

对密码学感兴趣的同学可以思考：本题中的加密算法是否可以被暴力破解？（提示：小于 $5$ 的自然数只有 $5$ 个）

对多项式感兴趣的同学可以思考：本题中的加密算法与 $p \left( x \right) = a + b x + c x^{2} + d x^{3}$ 有什么关系？（提示：观察 $p \left( 1 \right), p \left( 4 \right), p \left( 2 \right), p \left( 3 \right)$ 分别模 $5$ 的值）

对算法感兴趣的同学可以思考：本题中的加密算法与基 2 快速数论变换有什么关系？（提示：$i, j$ 依赖于 $e, f$ 而不依赖于 $g, h$，类似的，$k, l$ 依赖于 $g, h$ 而不依赖于 $e, f$）

对商环感兴趣的同学可以思考：本题中的加密算法与多项式环的哪些商环有关？（提示：$x^{4} - 1 = \left( x^{2} - 1 \right) \left( x^{2} + 1 \right) = \left( x - 1 \right) \left( x + 1 \right) \left( x - \mathrm{i} \right) \left( x + \mathrm{i} \right)$）

对数论变换感兴趣的同学可以思考：本题中的加密算法对应的解密算法为什么一定存在？（提示：整环上的中国剩余定理）
