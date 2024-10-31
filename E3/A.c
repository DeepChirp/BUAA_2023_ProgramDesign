#include <stdio.h>

int main()
{
    int m;
    int num[32];
    while (scanf("%d", &m) != EOF)
    {
        for (int i = 31; i >= 0; i--)
        {
            num[i] = (m >> i) & 1; // 逐位转换为二进制表示
            printf("%d", num[i]);  // 输出结果
        }
        printf("\n");
    }

    return 0;
}
