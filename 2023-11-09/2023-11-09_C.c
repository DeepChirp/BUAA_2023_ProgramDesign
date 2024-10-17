#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    scanf("%d%d", &c, &d);

    // 让字符串s1=a+b，s2=c+d
    char s1[1000], s2[1000];
    sprintf(s1, "%lld", (long long)a + b);
    sprintf(s2, "%lld", (long long)c + d);

    // 输出s1和s2
    printf("%s\n", s1);
    printf("%s\n", s2);

    // 比较s1和s2的字典序
    if (strcmp(s1, s2) > 0)
    {
        printf("a+b>c+d\n");
    }
    else if (strcmp(s1, s2) < 0)
    {
        printf("a+b<c+d\n");
    }
    else
    {
        printf("a+b=c+d\n");
    }

    return 0;
}
