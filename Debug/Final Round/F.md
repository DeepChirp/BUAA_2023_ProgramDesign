# 公主请上课

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目背景

xdgg终于找到了自己命中注定的另一半, 并且答应每天接她上课.
但是, 公主住在离学院路很远的城堡里, 只有一条路通向那里, 且一路上都是镇守的骑士.
xdgg每天接她的路上, 都要接受每一位骑士的挑战, 而这肯定要花费一定的时间.
为了不迟到, xdgg决定每天早早出门, 现在, 他想请你帮他计算一下从学院路到城堡的时间.

现在一共有$n$道关卡, 每道关卡都会有一名骑士镇守.
xdgg和骑士手中各持一件武器, 锐利程度分别为$S_{xd}$和$S_{knight}$.
当xdgg的武器比骑士更锋利时（即 $S_{xd} > S_{knight}$ ）, 他将采用武斗, 这场战斗会消耗$\lfloor \frac{max(S_{xd}, S_{knight})}{3} \rfloor$的时间.
否则, 聪明的xdgg将采用文斗的方式, 这场战斗将消耗$\lfloor \frac{max(S_{xd}, S_{knight})}{2} \rfloor$的时间.

请你计算一下xdgg所需要的时间.

## 输入格式

共 $T$ 组数据, 第一行读入数据组数 $T$ .
接下来, 对于每组数据, 读入两行.
第一行两个整数 $n$ $m$, 分别代表关卡个数和xdgg武器的锋利程度, 用空格隔开.
第二行 $n$ 个整数, 表示每名骑士武器的锋利程度, 用空格隔开.

## 输出格式

对于每组数据输出一行, 为xdgg完成任务所需要的时间.

## 数据范围

保证所提到的数据均在int范围内.

## 输入样例

    1
    1 5
    2

## 输出样例

    1

## bug代码

    #include<stdio.h>
    #define max(a,b) a>b?a:b
    int main()
    {
     int T;
     scanf("%d",&T);
     while(T--){
      int n,m;
      int ans;
      scanf("%d%d",&n,&m);
      for(int i=1;i<=n;i++){
       int s;
       scanf("%d",&s);
       if(s>m) ans += max(s,m)/3;
       else ans += max(s, m)/2;
      }
      printf("%d\n",ans);
     }
     return 0;
    }

$ Author: Hopearceus$
