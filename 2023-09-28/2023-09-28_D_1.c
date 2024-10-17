#include <stdio.h>

int main()
{
    int n;
    char id[19];
    int k[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char checksum[] = "10X98765432";
    int sum, mod;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", id); // 输入身份证号

        // 求和
        sum = 0;
        for (int i = 0; i < 17; i++)
        {
            sum += k[i] * (int)(id[i] - '0');
        }

        // 求余数
        mod = sum % 11;

        // 校验
        if (id[17] == checksum[mod])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
