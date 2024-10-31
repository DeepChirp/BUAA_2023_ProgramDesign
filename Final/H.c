#include <stdio.h>
#include <string.h>
#define MAX_int 2147483647
#define MAX_unsigned_int 4294967295
#define MAX_long_long 9223372036854775807

long long unsigned result;
int len;
long long unsigned
toDecimal(char *s, int radix)
{
    unsigned long long ans = 0;
    for (int i = 0; s[i]; i++)
    {
        int x = s[i] >= '0' && s[i] <= '9' ? s[i] - '0' : s[i] >= 'A' && s[i] <= 'F' ? s[i] - 'A' + 10
                                                                                     : s[i] - 'a' + 10;
        ans = ans * radix + x;
    }
    return ans;
}

void f(char *num)
{
    // 前缀
    if (len >= 2)
    {
        if (num[0] == '0')
        {
            if (num[1] == 'x' || num[1] == 'X')
            {
                // 十六进制
                result = toDecimal(num + 2, 16);
            }
            else
            {
                // 八进制
                result = toDecimal(num + 1, 8);
            }
        }
        else
        {
            sscanf(num, "%llu", &result);
        }
    }
}

int main()
{
    char num[100] = {0};
    while (scanf("%s", num) != EOF)
    {
        len = strlen(num);
        // 后缀
        if (len >= 2)
        {
            if (num[len - 1] == 'u' || num[len - 1] == 'U')
            {
                num[len - 1] = '\0';
                f(num);
                if (result <= MAX_unsigned_int)
                {
                    printf("unsigned int %llu\n", result);
                }
                else
                {
                    printf("unsigned long long %llu\n", result);
                }
                continue;
            }
        }
        if (len >= 3)
        {
            if ((num[len - 1] == 'l' || num[len - 1] == 'L') && (num[len - 2] == 'l' || num[len - 2] == 'L'))
            {
                if (num[len - 3] == 'u' || num[len - 3] == 'U')
                {
                    num[len - 1] = '\0';
                    num[len - 2] = '\0';
                    num[len - 3] = '\0';
                    f(num);
                    printf("unsigned long long %llu\n", result);
                }
                else
                {
                    num[len - 1] = '\0';
                    num[len - 2] = '\0';
                    f(num);
                    printf("long long %llu\n", result);
                }
                continue;
            }
        }
        f(num);
        if (result <= MAX_int)
        {
            printf("int %llu\n", result);
        }
        else if (result <= MAX_unsigned_int)
        {
            printf("unsigned int %llu\n", result);
        }
        else if (result <= MAX_long_long)
        {
            printf("long long %llu\n", result);
        }
        else
        {
            printf("unsigned long long %llu\n", result);
        }
    }
    return 0;
}
