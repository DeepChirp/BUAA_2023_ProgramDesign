# 计算混合积

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目描述

在线性代数的学习中，我们学习了三个三维向量的混合积。对于三个向量 $\boldsymbol a=(x_1, y_1, z_1), \boldsymbol b=(x_2, y_2, z_2), \boldsymbol c=(x_3, y_3, z_3)$ ，他们的混合积为 $(\boldsymbol a \times \boldsymbol b) \cdot \boldsymbol c$ .

三维向量的叉积和点积定义如下： $\boldsymbol a \times \boldsymbol b = (y_1z_2-y_2z_1, z_1x_2-z_2x_1, x_1y_2-x_2y_1)$ ， $\boldsymbol a \cdot \boldsymbol b = x_1x_2+y_1y_2+z_1z_2$ .

给出 $n$ 个三维向量 $\boldsymbol{a_1},\boldsymbol{a_2},\dots,\boldsymbol{a_n}$ 的坐标，然后输入 $T$ 组三个数 $i, j, k$ ，对于每组输入，请输出 $\boldsymbol{a_i},\boldsymbol{a_j},\boldsymbol{a_k}$ 三个向量的混合积 $(\boldsymbol{a_i}\times\boldsymbol{a_j})\cdot \boldsymbol{a_k}$ 。

请利用好函数进行计算，可以参考**Hint**以及其中的代码模板。

## 输入

共 $n+T+1$ 行。

第 $1$ 行两个正整数 $n$ , $T$ .

接下来 $n$ 行，每行 $3$ 个整数 $x_i, y_i, z_i$ ，表示 $\boldsymbol{a_i}$ 的坐标 $(x_i,y_i,z_i)$ .

接下来 $T$ 行，每行 $3$ 个整数 $i, j, k$ ，表示需要计算  $(\boldsymbol{a_i}\times\boldsymbol{a_j})\cdot \boldsymbol{a_k}$.

## 输出

共 $T$ 行。

对于输入 $T$ 行中每行的 $3$ 个整数 $i, j, k$ ，输出一个整数，表示计算 $(\boldsymbol{a_i}\times\boldsymbol{a_j})\cdot \boldsymbol{a_k}$ 的结果。

## 样例

### 输入

    3 1
    1 0 0
    0 1 0
    0 0 1
    1 2 3

### 输出

    1

## 数据范围

 $1\le i, j, k\le n\le10$

 $T\le10$

 $|x_i|, |y_i|, |z_i| \le 100$

## Hint

可以定义三个全局数组 $\mathrm{x}, \mathrm{y}, \mathrm{z}$ 用于存储向量坐标的三个分量。

定义一个点积函数，输入为 $2$ 个整数 $i, j$ ，返回一个整数表示表示向量 $(x_i,y_i,z_i)$ 与向量 $(x_j,y_j,z_j)$ 的点积结果。

定义一个叉积函数（模板中已给出），输入为 $3$ 个整数 $i, j, k$ ，计算 $(x_i,y_i,z_i)\times(x_j,y_j,z_j)=(x_k,y_k,z_k)$ ，即结果存入数组第 $k$ 个元素中，如可以取 $k=0$ 。

每次计算不同向量之间的混合积时仅需要调用这两个函数即可，代码量小，简单清晰，不易出错！

### 代码模板

    int x[15], y[15], z[15];
    int dot(int i, int j) //计算第i个向量与第j个向量的点积，返回点积结果。
    {
        //补充你的代码。
    }
    void cross(int i, int j, int k) //计算第i个向量叉乘第j个向量，结果存入第k个向量
    {
        x[k] = y[i] * z[j] - y[j] * z[i];
        y[k] = z[i] * x[j] - z[j] * x[i];
        z[k] = x[i] * y[j] - x[j] * y[i];
    }
    int main()
    {
        //补充你的代码
        return 0;
    }

Author: 哪吒
