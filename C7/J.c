#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ll long long
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define maxn 805

int pre[3][maxn << 1][maxn << 1], node[maxn << 1][maxn << 1];
int n, test, lim;
int X, Y, Z, r, k;

void update(int X, int Y, int Z, int r, int k)
{
    pre[0][min(lim, X - Z + n + 1)][min(lim, (Y + 1) - Z + n + 1)] += k;
    pre[0][min(lim, (X + r) - Z + n + 1)][min(lim, (Y + 1) - Z + n + 1)] -= k;
    pre[0][min(lim, X - Z + n + 1)][min(lim, (Y + r) - Z + n + 1)] -= k;
    pre[0][min(lim, (X + r) - Z + n + 1)][min(lim, (Y + r) - Z + n + 1)] += k;
    pre[1][min(lim, (X + 1) - Y + n + 1)][min(lim, Z - Y + n + 1)] += k;
    pre[1][min(lim, (X + r) - Y + n + 1)][min(lim, Z - Y + n + 1)] -= k;
    pre[1][min(lim, (X + 1) - Y + n + 1)][min(lim, (Z + r) - Y + n + 1)] -= k;
    pre[1][min(lim, (X + r) - Y + n + 1)][min(lim, (Z + r) - Y + n + 1)] += k;
    pre[2][min(lim, Y - X + n + 1)][min(lim, (Z + 1) - X + n + 1)] += k;
    pre[2][min(lim, Y - X + n + 1)][min(lim, (Z + r) - X + n + 1)] -= k;
    pre[2][min(lim, (Y + r) - X + n + 1)][min(lim, (Z + 1) - X + n + 1)] -= k;
    pre[2][min(lim, (Y + r) - X + n + 1)][min(lim, (Z + r) - X + n + 1)] += k;
}

void push_up()
{
    rep(i, 1, lim)
        rep(j, 1, lim)
    {
        pre[0][i][j] += pre[0][i - 1][j] + pre[0][i][j - 1] - pre[0][i - 1][j - 1];
        pre[1][i][j] += pre[1][i - 1][j] + pre[1][i][j - 1] - pre[1][i - 1][j - 1];
        pre[2][i][j] += pre[2][i - 1][j] + pre[2][i][j - 1] - pre[2][i - 1][j - 1];
    }
}

int get(int X, int Y, int Z)
{
    return node[X - Z + n + 1][Y - Z + n + 1] +
           pre[0][X - Z + n + 1][Y - Z + n + 1] +
           pre[1][X - Y + n + 1][Z - Y + n + 1] +
           pre[2][Y - X + n + 1][Z - X + n + 1];
}

int main()
{
    scanf("%d%d", &n, &test);
    lim = (n << 1 | 1);
    while (test--)
    {
        scanf("%d %d %d %d %d", &X, &Y, &Z, &r, &k);
        node[X - Z + n + 1][Y - Z + n + 1] += k;
        update(X, Y, Z, r, k);
    }
    push_up();
    per(i, n - 1, 0)
        per(j, n - 1, 1 + i - n)
            printf("%d ", get(0, j, i));
    per(i, -1, 1 - n)
        per(j, n - 1 + i, 1 - n)
            printf("%d ", get(0, j, i));
    return 0;
}