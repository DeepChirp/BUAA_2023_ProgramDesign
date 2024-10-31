# 自定义格式化

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

给出一个字符串 $str$，一个字符串 $format$ 和两个整数 $k,x$。

以 $str$ 作为输入，$format$ 作为 `scanf` 的格式化字符串，`%k.xs` 作为 `printf` 的格式化字符串，求下方代码的输出。

    #include <stdio.h>
    int main()
    {
        char s[1001];
        scanf(format, s);
        printf("%k.xs", s);
        return 0;
    }

即，将上方代码中的 `format`, `k`, `x` 分别用 $format$ 字符串和 $k,x$ 代替，求 $str$ 作为输入时代码的输出。

没有思路的话可以**参考Hint**。

## 输入

输入共三行。

第一行为字符串 $str$，长度不超过 $1000$，保证只包含可见字符（可能存在空格），即 ASCII 码范围为 $[32, 126]$。

第二行为字符串 $format$，长度不超过 $100$，保证是合法的只读入一个字符串的格式化字符串，且能与 $str$ 匹配。

第三行两个整数 $k,x$，保证 $k\in[-200,200], x\in[0,200]$。

## 输出

输出共一行，按照题目要求输出。

## 输入样例 1

    https://accoding.buaa.edu.cn/index
    %10s
    8 5

## 输出样例 1

       https

## 样例解释 1

    #include <stdio.h>
    int main()
    {
        char s[1005];
        scanf("%10s", s);
        printf("%8.5s", s);
        return 0;
    }

以输入的第一行作为输入，上方代码的输出是：

       https

## 输入样例 2

    E7 Pointer 2023.11.4 8:00 - 2023.11.7 23:50
    %*[A-Z0-9]%*s %[^-]%*[^:.]
    -2 50

## 输出样例 2

    2023.11.4 8:00

## 样例解释 2

    #include <stdio.h>
    int main()
    {
        char s[1001];
        scanf("%*[A-Z0-9]%*s %[^-]%*[^:.]", s);
        printf("%-2.50s", s);
        return 0;
    }

以输入的第一行作为输入，上方代码的输出是：

    2023.11.4 8:00

## Hint

推荐善用 `sscanf` 和 `sprintf` 完成本题。思路和代码模板如下：

    #include <stdio.h>
    int main()
    {
        char str[1005];
        char s[1005];
        char format[105];
        char format_p[105];
        int k, x;

        //读入
        //用sscanf，以format作为格式化字符串，从str中读入内容并存入s
        //用sprintf，将"%k.xs"输入至format_p
        //用printf，以format_p作为格式化字符串输出s

        return 0;
    }
