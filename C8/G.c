#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

// 多项式结构体
typedef struct
{
    int coef;
    int exp;
} Poly;

Poly poly1[MAX_SIZE], poly2[MAX_SIZE], result[MAX_SIZE];

int Compare(const void *a, const void *b)
{
    return ((Poly *)b)->exp - ((Poly *)a)->exp;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &poly1[i].coef, &poly1[i].exp);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d", &poly2[i].coef, &poly2[i].exp);
    }
    // 对每个多项式的项按照指数进行排序
    qsort(poly1, n, sizeof(Poly), Compare);
    qsort(poly2, m, sizeof(Poly), Compare);
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        // 指数大的项先放入结果中
        if (poly1[i].exp > poly2[j].exp)
        {
            result[k++] = poly1[i++];
        }
        else if (poly1[i].exp < poly2[j].exp)
        {
            result[k++] = poly2[j++];
        }

        // 指数相同的项进行合并
        else
        {
            int sum = poly1[i].coef + poly2[j].coef;
            if (sum != 0)
            {
                result[k].coef = sum;
                result[k].exp = poly1[i].exp;
                k++;
            }
            i++;
            j++;
        }
    }
    // 将剩余的项放入结果中
    while (i < n)
    {
        result[k++] = poly1[i++];
    }
    while (j < m)
    {
        result[k++] = poly2[j++];
    }
    for (i = 0; i < k; i++)
    {
        printf("%d %d ", result[i].coef, result[i].exp);
    }
    return 0;
}