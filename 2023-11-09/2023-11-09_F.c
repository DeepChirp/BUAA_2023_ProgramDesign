#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 1005
#define MAX_OTTERS 10001

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    getchar(); // 除去换行符

    char *otters[MAX_OTTERS];
    char name[MAX_NAME_LENGTH];
    for (int i = 1; i <= n; i++)
    {
        fgets(name, MAX_NAME_LENGTH, stdin);
        int len = strlen(name);
        otters[i] = malloc(len + 1);             // 多开一位是为了存储字符串最后的空字符
        strcpy(otters[i], name);                 // 复制字符串
        otters[i][strcspn(otters[i], "\n")] = 0; // 除去结尾的换行符
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);

        // 交换
        char *temp = otters[u];
        otters[u] = otters[v];
        otters[v] = temp;
    }

    // 输出
    for (int i = 1; i <= n; i++)
    {
        printf("%s\n", otters[i]);
        free(otters[i]);
    }

    return 0;
}