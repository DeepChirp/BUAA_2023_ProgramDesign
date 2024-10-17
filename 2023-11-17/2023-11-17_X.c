#include <stdio.h>

#define MAX 1005

int matrix[MAX][MAX];  // 定义矩阵
int visited[MAX][MAX]; // 记录访问过的位置
int n;                 // 记录矩阵长度
int max = 0;           // 记录最大行数

// 深度优先搜索函数
int dfs(int x, int y)
{
    // 如果当前位置超出矩阵范围，或者已经访问过，或者当前位置为0，则返回
    if (x < 1 || x > n || y < 1 || y > n || visited[x][y] || matrix[x][y] == 0)
    {
        return 0;
    }

    visited[x][y] = 1;

    // 对当前位置的上下左右四个方向进行深度优先搜索
    return matrix[x][y] + dfs(x - 1, y) + dfs(x + 1, y) + dfs(x, y - 1) + dfs(x, y + 1);
}

int main()
{
    scanf("%d", &n); // 读入矩阵长度

    // 读入矩阵
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int temp = dfs(i, j);
            max = temp > max ? temp : max;
        }
    }

    printf("%d", max); // 输出最大金币

    return 0;
}