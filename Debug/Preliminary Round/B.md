# Yamche 与圆周率

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目背景

Yamche 也想学数学！它最近在研究无穷级数与圆周率的关系，它找到了两个公式：

公式一：$$\dfrac{\pi}{4} = \arctan 1 = \sum_{u=0}^{\infty} \dfrac{(-1)^u}{2u+1}$$

公式二：$$\dfrac{\pi^2}{8} = \sum_{u=0}^{\infty} \dfrac{1}{(2u+1)^2}$$

当然了，这是一个无穷级数的求和，Yamche 只需要计算前 $n$ 项就行了。

## 输入格式

一行一个整数 $n$，表示需要计算的项数。

## 输出格式

共 $n$ 行，每行两个浮点数，用 `,` 隔开，保留到**小数点后 8 位**，分别表示两种公式计算得到的 $\pi$ 的值。

对于第 $i$ 行，只需要计算级数前 $i$ 项即可。

## 数据范围

$1 \leqslant n \leqslant 1000$

## 输入样例

    3

## 输出样例

    4.00000000, 2.82842712
    2.66666667, 2.98142397
    3.46666667, 3.03461511

## Bug 代码

    #include <math.h>
    #include <stdio.h>

    int main() {
        int n;
        scanf("%d", &n);
        double sum1 = 0, sum2 = 0;
        double pi1, pi2;
        int sign = 1;
        for (int u = 0; u < n; ++u) {
            sum1 += sign / (2u + 1);
            sum2 += 1 / ((2u + 1) * (2u + 1));
            sign = sign * -1;

            pi1 = sum1 * 4;
            pi2 = sqrt(sum2 * 8);
            printf("%.8f, %.8f\n", pi1, pi2);
        }
        return 0;
    }

$Adapted:kai_Ker$
