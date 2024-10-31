#include <stdio.h>
int main()
{
    int a;
    int result = 0; // 存储结果
    int flag = 1;   // 存储符号类型
    char b;
    while (1)
    {
        scanf("%d %c", &a, &b);

        // 加法
        if (flag == 1)
        {
            result += a;
        }
        // 减法
        else if (flag == 0)
        {
            result -= a;
        }

        if (b == '=')
        {
            break;
        }
        else if (b == '+')
        {
            flag = 1;
        }
        else if (b == '-')
        {
            flag = 0;
        }
    }
    printf("%d", result);
    return 0;
}