# 哪吒的水题

时间限制：1000 ms / 空间限制：65536 KB / 难度：4

## 题目描述

 $\mathcal{Simon}$ 家和哪吒家坐落在笔直的 $\mathcal{Linda}$ 河的旁边，河位于 $x$ 轴上，两人家的坐标分别为 $(x_1,y_1),(x_2,y_2), x_1\le x_2$ 。

现在哪吒和 $\mathcal{Simon}$ 想在河的某处修建一座供水站，并修建**笔直**的水管通水到家里。由于 $\mathcal{Simon}$ 不是程序设计的助教，他使用的是低贱的 $\mathcal{Jason}$ 牌水管，而哪吒使用的是高贵的 $\mathcal{Kevin}$ 牌水管，**每单位距离价格**分别为 $s_1,s_2$  $(0\le s_1\le s_2)$ 。

两人当助教的工资很少，他们想尽可能省点钱请 $\mathcal{Dora}$ 和 $\mathcal{Vanciry}$ 吃 $\mathfrak{Crazy\  Thuesday}$ 。请聪明的你帮帮他们吧！

请确定供水站的位置，使得两人修建水管的总费用**尽可能少**，输出供水站的**横坐标**和这个**总费用**。

没有思路的同学建议仔细看 **Hint**.

## 输入

共两行，第一行是四个整数，分别为 $x_1, y_1, x_2, y_2$ ；

保证 $x_1\le x_2$ 且 $|x_i|, |y_i| \le 10000$；

第二行是两个整数 $s_1,s_2$ ，$0\le s_1\le s_2\le 10000$ ，且 $s_1,s_2$ 不同时为 $0$ 。

## 输出

一行两个浮点数，**保留三位小数**，中间用一个空格隔开，分别表示修建供水站的横坐标和所需要的总费用

## 输入样例1

    0 1 1 1
    1 1

## 输出样例1

    0.500 2.236

## 输入样例2

    -3 1 2 -1
    0 106

## 输出样例2

    2.000 106.000

## 输入样例3

    0 4 8 12
    25 39

## 输出样例3

    3.000 632.000

## Hint

总费用 $s$ 是一个关于供水站横坐标的**先减后增函数**，可以选择使用**三分法**求该函数极值点；

也可以自己在纸上对 $s$ 求导，然后用**二分法**求得导函数的零点。

### 代码模板

#### 法一：三分法

 $l$ 和 $r$ 为区间左右端点， $s$ 为总费用关于供水站横坐标的函数，一般情况下为一**先减后增**函数，用三分法求它的极小值点。部分代码如下：

    mid1 = (2*l+r)/3;
    mid2 = (l+2*r)/3;
    while(r-l>eps) {
        if(s(mid1) > s(mid2)) {
            //此时供水站只可能在区间[mid1, r]上
            //补全你的代码
        }
        else {
            //此时供水站只可能在区间[l, mid2]上
            //补全你的代码
        }
        mid1 = (2*l+r)/3;
        mid2 = (l+2*r)/3;
    }

此时 $l, mid1, mid2, r$ 之间差小于 $eps$ ，一定精度范围下可视为相等，均为满足要求的供水站横坐标

#### 法二：二分法

 $l$ 和 $r$ 为区间左右端点，设 $f$ 为 $s$ 对供水站横坐标的导函数，一般情况下为一**先负后正**函数，用二分法求函数 $f$ 的零点。部分代码如下：

    mid = (l+r)/2;
    while(r-l>eps) {
        if(f(mid) > 0) {
            //补全你的代码
        }
        else {
            //补全你的代码
        }
        mid = (l+r)/2;
    }

此时 $l, mid, r$ 之间差小于 $eps$ ，一定精度范围下可视为相等，均为满足要求的供水站横坐标

PS: 感兴趣的同学可以思考一下本题和光的折射的联系

Author: 哪吒
