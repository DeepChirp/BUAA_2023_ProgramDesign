# 摩卡与水獭乐团派对 2.0

时间限制：1000 ms / 空间限制：4096 KB / 难度：3

**注意本题的内存限制。**

## 题目描述

为了庆祝重要的日子，小水獭们决定开一个乐团派对。

水獭们先站成了一排，为了使水獭们有一个更好的表演队形，Moca 需要动态调整水獭们的位置，直到得到一个她满意的队形。每次她会指定两个位置，在这两个位置上的水獭会**交换它们的位置**。

现在，给你所有水獭的名字，请你帮助 Moca 记录下最后确定的队列。

## 输入

第一行两个正整数 $n\ m$ ，分别代表水獭的个数、Moca 进行的交换操作次数。其中，$1 \le n \le 10000$ ，$1\le m \le3000$ 。

接下来 $n$ 行，每行一个**长度不超过** $1000$ 的字符串，第 $i$ 行表示初始位置是 $i$ 的水獭的名字，**水獭的名字可能含有空格**，但名字的开头结尾一定不是空格，字符串只由大小写字母和空格组成，保证**所有水獭的名字长度加在一起不超过 $400000$** 。

接下来 $m$ 行，每行两个正整数 $u\ v$ ，表示让当前位置是 $u$ 和 $v$ 的两只水獭交换位置，保证 $1 \le u,v\le n$ （位置从 1 开始，一直到 $n$），保证每次输入的 $u$ 和 $v$ 不同。

## 输出

输出 $n$ 行字符串，表示交换完成之后每个位置的水獭的名字。

## 输入样例

    4 2
    Otter Moca
    Otter Ran
    Moca Otter
    Moca Otter Moca
    1 2
    2 4

## 输出样例

    Otter Ran
    Moca Otter Moca
    Moca Otter
    Otter Moca

## 样例解释

第一次交换当前位置为 $1$ 和 $2$ 的两只水獭，交换后四个位置的水獭依次是 `Otter Ran`、`Otter Moca`、`Moca Otter`、`Moca Otter Moca`；第二次交换当前位置为 $2$ 和 $4$ 的两只水獭，交换后四个位置的水獭依次是 `Otter Ran`、`Moca Otter Moca`、`Moca Otter` 和 `Otter Moca` 。

**注意内存限制！**

## Hint

第一，我们可以发现，根据总的水獭数和水獭名字的最大长度，我们至少要开一个 $10000$ * $1000$ 的数组来存放名字（这里没有考虑字符串最后的空字符），但是可以发现水獭名字的总长度远远小于这个大小，如果真的这么做许多空间就被浪费了。

所以我们就想到，有没有什么办法能够动态地每次都开一个大小合适的字符数组来存放名字，我们就想到了课上讲到的动态存储分配：

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    char str[10];

    int main()
    {
        gets(str);
        int len = strlen(str);
        char *name = (char*)malloc(len*sizeof(char) + 1); // 多开一位是为了存储字符串最后的空字符，直接写 len + 1 也可
        strcpy(name, str);
        puts(name);
        free(name); // 有借有还

        return 0;
    }

这样，用来存储名字的 $name$ 的大小就会根据名字的长度动态分配。在这道题中我们要存最多 $10000$ 只水獭的名字，所以我们就可以定义一个指针数组 `char *otter[10001]` 来记录所有水獭的名字，该数组每个元素 `otter[i]` 是一个 `char *` 类型的指针变量，读入第 $i$ 个名字就用 `otter[i]` 来动态申请空间，然后存储这个名字。

第二，在交换两只水獭的名字时，我们可以模仿我们之前做的**交换变量 a 和变量 b 的值**，对于指针类型而言，这种操作相当于交换了两个指针指向的地址，具体来说，尝试以下代码：

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    char str[10];
    int main()
    {
        gets(str);
        int len = strlen(str);
        char *name1 = (char*)malloc(len + 1);
        strcpy(name1,str);

        gets(str);
        len = strlen(str);
        char *name2 = (char*)malloc(len + 1);
        strcpy(name2,str);

        char *tem = name1;
        name1 = name2;
        name2 = tem;

        printf("otter1 is %s\n",name1);
        printf("otter2 is %s\n",name2);

        // 有借有还
        free(name1);
        free(name2);

        return 0;
    }

第三，别忘了处理输入第一行两个整数后面的换行符，否则下一个 `gets` 读入的将会只有这个换行符，而不是我们期望的第一只水獭的名字。

再见啦，小水獭们~

Author：Moca
