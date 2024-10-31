#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert_base(int num, int base)
{
    char *result = (char *)malloc(32 * sizeof(char));
    int index = 0;

    while (num > 0)
    {
        int remainder = num % base;
        if (remainder < 10)
        {
            result[index++] = remainder + '0';
        }
        else
        {
            result[index++] = remainder - 10 + 'A';
        }
        num /= base;
    }

    if (index == 0)
    {
        result[index++] = '0';
    }

    result[index] = '\0';

    // 存储结果
    int i = 0;
    int j = index - 1;
    while (i < j)
    {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
        i++;
        j--;
    }

    return result;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M, N;
        char num[32];
        scanf("%d %d %s", &M, &N, num);

        // 将输入的数转换为10进制
        int decimal = 0;
        int len = strlen(num);
        for (int j = 0; j < len; j++)
        {
            if (num[j] >= '0' && num[j] <= '9')
            {
                decimal = decimal * M + (num[j] - '0');
            }
            else
            {
                decimal = decimal * M + (num[j] - 'A' + 10);
            }
        }

        // 将10进制转换为N进制
        char *result = convert_base(decimal, N);
        printf("%s\n", result);

        free(result);
    }

    return 0;
}