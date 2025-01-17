# Musha 走迷宫

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

Musha 迷失在了一个由方尖碑围成的迷宫中！你能帮她找寻出路吗？哦不，她还想知道她一共可以有几种逃跑路线。

虽然说，她很不好意思让你帮忙，但是，现在情况紧迫！(˚ ˃̣̣̥᷄⌓˂̣̣̥᷅ )

给定一个由 $0$ 和 $1$ 组成的迷宫，$0$ 表示可以走，$1$ 则表示不可通过的墙壁。**行列序号均从 1 开始**。

对于每一次行动，Musha 可以且仅可以向上、下、左、右中的一个方向移动一格。

一条合法的路径上**不可以出现走过两次及以上的格子，不可以出现迷宫范围以外的格子**。

已知 Musha 现在所处的位置，以及出口的位置，请问她一共有**几种不同的逃跑路线**。

两条路径不同当且仅当两条路径上经过的格子不同或同一格子对应的移动方向不同。

## 输入格式

输入共 $X + 3$ 行。

第一行两个整数 $X$ 和 $Y$，表示迷宫的尺寸为 $X$ 行 $Y$ 列。

接下来的 $X$ 行，每行有 $Y$ 个由空格隔开的，仅由 $0$ 或 $1$ 组成的数，表示迷宫的样貌。

接下来一行两个整数 $sx$ 和 $sy$，表示 Musha 当前处在第 $sx$ 行第 $sy$ 列。

最后一行两个整数 $ex$ 和 $ey$，表示出口处在第 $ex$ 行第 $ey$ 列。

## 输出格式

一行一个整数，表示可行路线总条数。

## 数据范围

$2 \leqslant X,Y \leqslant 6$

保证 Musha 所处位置与出口位置均为 $0$。

保证 Musha 不会从出口出发，且至少存在一条合法的路径。

## 输入样例

    4 5
    0 1 0 0 0
    1 0 0 1 0
    0 0 1 0 0
    0 0 0 0 1
    2 2
    4 2

## 输出样例

    3

## Bug 代码

    #include <stdio.h>

    int visited[8][8];

    int x, y;   // 边界
    int ex, ey; // 终点

    int ans;

    void dfs(int x, int y) {
        int cx = x, cy = y;
        if (cx < 1 || cx > x) {
            return;
        }
        if (cy < 1 || cy > y) {
            return;
        }
        if (visited[cx][cy]) {
            return;
        }

        if (cx == ex && cy == ey) {
            ans = ans + 1;
            return;
        }

        visited[cx][cy] = 1;
        dfs(cx - 1, cy);
        dfs(cx, cy - 1);
        dfs(cx + 1, cy);
        dfs(cx, cy + 1);
        visited[cx][cy] = 0;
    }

    int main() {
        scanf("%d%d", &x, &y);
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= y; ++j) {
                scanf("%d", &visited[i][j]);
            }
        }

        int sx, sy; // 起点
        scanf("%d%d", &sx, &sy);
        scanf("%d%d", &ex, &ey);

        dfs(sx, sy);
        printf("%d\n", ans);

        return 0;
    }

$Author:kai_Ker \& Fish5$
