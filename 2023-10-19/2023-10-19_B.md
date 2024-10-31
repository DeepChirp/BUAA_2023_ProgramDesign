# a^b Problem Ver.⑨ 2023

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

在学习数学的过程中，笨蛋 Cirno 常常遇到一些自己无法解决的问题，但她善于搜索为自己解惑。

例如，Cirno 遇到了一个经典问题：给定三个整数 $a,b,p$，求 $a^b \bmod p$。

她虽然不知道应该怎么解决这个问题，但是她发现有一个函数可以帮助她：

    long long qpow(long long a, unsigned long long b, long long p)
    {
        long long ans = 1;
        a = a % p;
        while (b)
        {
            if (b & 1)
                ans = (ans * a) % p;
            b >>= 1;
            a = a * a % p;
        }
        return ans;
    }

这个函数的返回值就是答案，相信你也可以利用这个函数，解决这道简单问题！

## 输入

一行三个整数 $a,b,p$，以一个空格分隔。( $0\le a,b < 2^{31}$，$a+b>0$，$2 \leq p < 2^{31}$)

## 输出

一个整数，表示答案。

## 输入样例

    7 6 12

## 输出样例

    1

## NOT HINT

如果你很闲想看看实现[原理](https://oi-wiki.org/math/binary-exponentiation/)。
