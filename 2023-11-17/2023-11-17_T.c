#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 比较函数，用于后缀排序
int Compare(const void *a, const void *b)
{
    char **suffixA = (char **)a;
    char **suffixB = (char **)b;
    return strcmp(*suffixA, *suffixB);
}

// 找到字典序第k小的后缀
char *findKthSuffix(char *str, int k)
{
    int len = strlen(str);
    char **suffixes = (char **)malloc(len * sizeof(char *));
    int *indexes = (int *)malloc(len * sizeof(int));

    // 构建后缀数组
    for (int i = 0; i < len; i++)
    {
        suffixes[i] = str + i;
        indexes[i] = i;
    }

    // 对后缀数组进行排序
    qsort(suffixes, len, sizeof(char *), Compare);

    // 返回第k小的后缀
    return suffixes[k - 1];
}

int main()
{
    char str[10001];
    int k;

    // 读取输入字符串和k值
    scanf("%s", str);
    scanf("%d", &k);

    // 找到字典序第k小的后缀
    char *kthSuffix = findKthSuffix(str, k);

    // 输出结果
    printf("%s\n", kthSuffix);

    return 0;
}