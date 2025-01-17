# 失踪的指挥棒

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

$\lceil$ Ormandy $\rfloor$ 先生为了感谢你这学期的各种帮助，决定送你一批珍藏的 **长度各异的** 指挥棒。这批指挥棒一共有 $n$ 个，编号分别为 $1,2,3,\dots,n$，分为 $m$ 组。$\lceil$ Ormandy $\rfloor$ 先生 **已经完成** 分组、排序、编号的工作了，规则如下：记编号为 $i$ 的指挥棒长度为 $a_i$，属于第 $m_i$ 组，则对任意的 $1 \le j \lt k \le n$ 都有：

* $a_j \ne a_k$
* 若 $m_j = m_k$，则 $a_j \gt a_k$
* 若 $m_j \neq m_k$，则 $a_j \lt a_k$

但是现在 $\lceil$ Ormandy $\rfloor$ 先生突然发现有一些指挥棒似乎失踪了，因为他原本打算送你的指挥棒并不只有这 $n$ 个。于是他找来了一份清单，上面列举了 $T$ 个他怀疑很有可能失踪的指挥棒的长度，你能帮他确认一下清单上的指挥棒在不在礼盒当中嘛？

## 输入

共 $3$ 行：

第一行 $3$ 个整数，分别为 $n,m,T$ ,含义与题目描述相同，保证 $1 \le m \le n \le 100000$，$1 \le T \le 100000$。

第 $2$ 行 $n$ 个正整数，分别为 $a_1,a_2,a_3,\dots,a_n$，其中 $a_i$ 表示礼盒内编号为 $i$ 的指挥棒长度。保证 $a_i$ 在 `int` 范围内。

第 $3$ 行 $T$ 个正整数，分别表示 $T$ 个待查找的指挥棒的长度。保证长度均在 `int` 范围内。

## 输出

共 $T$ 行，每行 $1$ 个整数，第 $i$ 行表示第 $i$ 个待查找的指挥棒是否在礼盒当中。
若在，输出这个指挥棒的编号。
若不在，输出 `0`。

## 输入样例

    5 2 3
    30 20 10 50 40
    40 20 60

## 输出样例

    5
    2
    0

## HINT

`bsearch` 是一个 `<stdlib.h>` 库函数，用于在已排序的一段数组中二分查找 ：

    void *bsearch(const void *key, const void *base, size_t num, size_t size, int (*cmp)(const void *, const void *));

其中 `key` 为指向待查找数据的 **指针**，`base` 为待查找数组的首地址（数组名），`num` 为数组中元素个数，`size` 为单个元素的大小（一般用 `sizeof(...)`表示），`cmp` 为自定义判断函数，定义方式与在 `qsort` 中类似。

    int cmp(const void *a,const void *b)
    {
        if(*b 为 目标元素) return 0;
        if(*b 位于 目标元素 右侧) return -1;
        if(*b 位于 目标元素 左侧) return 1;
    }

如上即为 `cmp` 定义方式，你只需要填写三个判断条件就能实现二分查找。其中 `a` 为 `key`，`*b` 相当于二分查找中的 `base[mid]`，因此 `*b` 与目标元素在数组中的位置关系可以可以用 `*a` 与 `*b` 的关系来表示。

`bsearch` 返回值为 `void*`（无类型指针，接收时要先转换明确其指针类型），若能找到则返回指向数组中与 `key` 相等的元素的指针（存在多个时可能会指向任意一个），否则返回 `NULL`。

例如下面程序可以实现在 `father` 数组中查找是否存在不超过 `son` 数组中元素的元素，存在多个时输出最靠后的下标，否则输出 `nowhere`。这个程序输出结果为 `5 8 nowhere`：

    #include <stdio.h>
    #include<stdlib.h>
    int cp(const void *a,const void *b)
    {
        //觉得困惑的同学不妨在这加一句printf("a:%d b:%d ",*(int *)a,*(int *)b);看看会发生什么叭
        if(*(int *)a>=*(int *)b && *(int *)a<*((int *)b+1)) return 0;
        else if(*(int *)a>=*(int *)b) return 1;
        else return -1;
    }
    int main()
    {
     int father[9]={1,2,3,3,3,3,5,6,7};
     int son[3]={4,100,0};
     int ans;
     for(int i=0;i<=2;i++)
        {
            if(father[8]<=son[i])
            {
                printf("8 ");
                continue;
                //千万注意边界处理！！！
            }
            int *ans=(int *)bsearch(son+i,father,9,sizeof(int),cp);
            //一定要对besearch返回值进行类型转换

            if(ans==NULL) printf("nowhere ");
            else printf("%d ",ans-father);
        }
     return 0;
    }

## 思考一下

为什么 `cmp` 中说 `if(*b 为 目标元素)` 而没有说 `if(*b == *a)` 呢？
