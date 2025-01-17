# 弹珠汽水瓶里的指针同学

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目描述

指针同学姓野，全名野指针。有诗云：举觞白眼望青天，皎如玉树临风前。因此，指针同学有很多仰慕者。

每个仰慕者有一个仰慕值 $adore_i$。仰慕值越高，代表这个仰慕者越仰慕指针同学。

这天，指针同学想要了解一下他的仰慕者。但他的仰慕者实在是太多了，即使强如指针同学也不得不有选择地进行了解。

好在指针同学已经掌握了每个人的仰慕值，他想通过每个人的仰慕排名和反仰慕排名来决定要了解的仰慕者。

具体来说，仰慕排名代表一个仰慕者的仰慕值在所有仰慕者中，按照从大到小的顺序得到的排名；反仰慕排名代表一个仰慕者的仰慕值在所有仰慕者中，按照从小到大的顺序得到的排名。所有排名 （$rank$） 从 $1$ 开始。具有相同的仰慕值的仰慕者排名相同。仰慕者的排名是连续的（见样例），也就是说如果有两位仰慕者，其排名的差值大等于 $2$，那么一定存在与这两位仰慕者不同的一名仰慕者，其排名位于这两名仰慕者之间。

请你告诉指针同学每个仰慕者的排名，作为回报，指针同学会给你俘获 TA 的心的机会 ~

形式化的，给定数列 $a_n$，记集合 $S={ a \mid \exists i \in [1,n] ,a=a_i }$，对所有 $i \in [1,n]$ 求 $\#{ a' \mid a' \in S \wedge a' \ge a_i}$ 或 $\#{ a' \mid a' \in S \wedge a'  \le a_i}$。

[](私のことを決して本気で愛さないで)

## 输入

本题有多组数据。

第一行一个整数 $T$ 代表数据组数。

接下来 $3T$ 行，每 $3$ 行一组数据。

对于每组数据，第一行一个整数 $n$ 代表指针同学共有 $n$ 个仰慕者；

第二行 $n$ 个整数，代表每个仰慕者的仰慕值 $adore_i$；

第三行一个字符 `<` 或 `>`，分别代表指针同学想要得到每个仰慕者的仰慕排名或反仰慕排名。

## 输出

对于每组数据，输出一行，代表每个仰慕者对应的 $rank_i$。

## 输入样例

    1
    6
    1 1 4 5 1 4
    >
## 输出样例

    1 1 2 3 1 2

## 数据范围

$1 \le T \le 10, 1 \le n \le 10^5, \Sigma n \le 10^5, 1 \le adore_i \le 10^9$

$Author: Fish5$

## Bug 代码

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct p
    {
        int original;
        int id;
    }pair;

    int pairCmpLess(const void*, const void*); // <
    int pairCmpGreater(const void*, const void*); // >
    void discretize(int, int);

    int main()
    {
        int T;
        scanf ("%d",&T);
        while (T--)
        {
            int n;
            int adore[100004];
            scanf ("%d",&n);
            for (int i=1;i<=n;i++)
                scanf ("%d",&adore[i]);
            discretize(adore, n); // solve
            for (int i=1;i<=n;i++)
                printf ("%d ", adore[i]);
            puts("");
        }
        return 0;
    }

    int pairCmpLess(const void *a, const void *b)
    {
        return (pair*)a.original<(pair*)b.original;
    }

    int pairCmpGreater(const void *a, const void *b)
    {
        return (pair*)a.original>(pair*)b.original;
    }

    void discretize(int adore, int n)
    {
        pair tmp[100004];
        for (int i=1;i<=n;i++)
            tmp[i].original=adore[i], tmp[i].id=i;
        char cmpType; // '<' or '>'
        scanf (" %c", &cmpType);
        cmpType=cmpType&2>>1; // ASCII code of '<' is 0011_1100 and '>' is 0011_1110
        const int *pairCmp[2]={pairCmpLess, pairCmpGreater};
        qsort(tmp+1, n, sizeof(pair), pairCmp[cmpType]);
        for (int i=1, j=0;i<=n;i++)
            if (tmp[i].original==tmp[i-1].original)
                adore[tmp[i].id]=j;
            else
                adore[tmp[i].id]=++j;
    }
