# Robo实验

时间限制：1000 ms / 空间限制：65536 KB / 难度：5

## 题目描述

你正在开发一种新型的探测月球的机器人。现在这个机器人正在一个很大的场地上进行实验。这个场地可以被看作是一个无限的二维平面。开始时，机器人位于 $(0, 0)$。然后它将按顺序执行 $n$ 条指令。每条指令可以用一个大写英文字母表示：

* “L”：从 $(x, y)$ 移动到 $(x - 1, y)$；
* “R”：从 $(x, y)$ 移动到 $(x + 1, y)$；
* “U”：从 $(x, y)$ 移动到 $(x, y + 1)$；
* “D”：从 $(x, y)$ 移动到 $(x, y - 1)$。

注意，除了原点 $(0, 0)$ 外，场地上还有一些障碍物。当机器人试图移动到下一个位置时，它将检查目标坐标是否有障碍物。如果有障碍物，机器人将停留在当前位置，标记当前指令为已执行，并继续执行后续指令。

你已经向机器人发送了 $n$ 条指令，但不幸的是，由于一些问题，你并不能获取到场地的地图和机器人的实时位置。假设机器人已经执行完所有 $n$ 条指令，在前往场地之前，你想知道机器人最终可能会出现在哪些位置。请编写一个程序，找出机器人最终可能出现的所有位置。

## 输入格式

第一行包含一个整数 $T$（$1 \le T \le 10$），表示测试数据的组数。

接下来 $2T$ 行，每两行表示一组数据。

对于每组数据：

* 第一行包含一个整数 $n$（$1 \le n \le 20$），表示指令的数量。
* 第二行包含一个长度为 $n$ 的字符串 $s$（$s_i \in \lbrace “L”, “R”, “D”, “U”\rbrace$），其中第 $i$ 个字母表示第 $i$ 条指令。

## 输出格式

对于每组数据，首先输出一行，包含一个整数 $k$，表示机器人最终可能出现的位置的数量。然后输出 $k$ 行，每行包含两个整数 $x$ 和 $y$，表示机器人最终可能出现在 $(x, y)$。当 $k \ge 2$ 时，按照 $x$ 的升序输出，如果 $x$ 相同；则按照 $y$ 的升序输出。

## 样例

### 样例输入

    2
    2
    RU
    4
    LRUD

### 样例输出

    4
    0 0
    0 1
    1 0
    1 1
    4
    0 -1
    0 0
    1 -1
    1 0

### Bug 代码

    #include <stdio.h>
    #include <string.h>

    #define MAXN 25
    typedef struct {
        int x, y;
    } Point;
    typedef struct {
        int mp[MAXN * 2][MAXN * 2];
    } Map;
    void add(Map *mp, Point p) {
        mp->mp[p.x + MAXN][p.y + MAXN] = 1;
    }
    void del(Map *mp, Point p) {
        mp->mp[p.x + MAXN][p.y + MAXN] = 0;
    }
    int exists(Map *mp, Point p) {
        return mp->mp[p.x + MAXN][p.y + MAXN];
    }

    Map ans, ob, path;
    char s[MAXN];
    void dfs(Point now, int dep, int n) {
        if (dep == n) {
            add(&ans, now);
            return;
        }
        Point nxt;
        switch (s[dep]) {
        case 'L':
            nxt.x = now.x - 1;
            nxt.y = now.y;
            break;
        case 'R':
            nxt.x = now.x + 1;
            nxt.y = now.y;
            break;
        case 'U':
            nxt.x = now.x;
            nxt.y = now.y + 1;
            break;
        case 'D':
            nxt.x = now.x;
            nxt.y = now.y - 1;
            break;
        default:
            break;
        }
        add(&path, now);
        if (exists(&path, nxt)) {
            dfs(nxt, dep + 1, n);
        } else if (!exists(&ob, nxt)) {
            dfs(nxt, dep + 1, n);
            add(&ob, nxt);
            dfs(now, dep + 1, n);
            del(&ob, nxt);
        } else {
            dfs(now, dep + 1, n);
        }
        del(&path, now);
    }
    int main() {
        int T;
        scanf("%d", &T);
        while (T--) {
            int n;
            scanf("%d%s", &n, s);
            dfs((Point){0, 0}, 0, n);
            int cnt = 0;
            for (int i = -n; i <= n; i++)
                for (int j = -n; j <= n; j++)
                    cnt += exists(&ans, (Point){i, j});
            printf("%d\n", cnt);
            for (int i = -n; i <= n; i++)
                for (int j = -n; j <= n; j++)
                    if (exists(&ans, (Point){i, j})) {
                        printf("%d %d\n", i, j);
                    }
        }
        return 0;
    }

$\text{Adapted by}:\mathcal{Red}$
