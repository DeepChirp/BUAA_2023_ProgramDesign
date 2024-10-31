#include <stdio.h>

#define MAXN 105

int main()
{
    int n;
    int A[MAX][MAX] = {0};
    int x[MAX] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int y[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y[i] += A[j][i] * x[j];
        }
    }

    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += y[i] * x[i];
    }

    printf("%lld\n", result);

    return 0;
}