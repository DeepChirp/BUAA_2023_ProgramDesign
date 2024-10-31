#include <stdio.h>

#define MAX 1005

int matrix[MAX][MAX];  // 定义矩阵
int visited[MAX][MAX]; // 记录访问过的位置
int h, w;              // 记录矩阵的高和宽
int max_row;           // 记录最大行数

// 深度优先搜索函数
void dfs(int x, int y)
{
    // 如果当前位置超出矩阵范围，或者已经访问过，或者当前位置为0，则返回
    if (x < 1 || x > h || y < 1 || y > w || visited[x][y] || matrix[x][y] == 0)
    {
        return;
    }

    visited[x][y] = 1;                   // 标记当前位置已访问
    max_row = x > max_row ? x : max_row; // 更新最大行数

    // 对当前位置的上下左右四个方向进行深度优先搜索
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

int main()
{
    scanf("%d%d", &h, &w); // 读入矩阵的高和宽

    // 读入矩阵
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 对第一行中的每一个1进行深度优先搜索
    for (int i = 1; i <= w; i++)
    {
        if (matrix[1][i] == 1)
        {
            dfs(1, i);
        }
    }

    printf("%d\n", max_row); // 输出最大行数

    return 0;
}