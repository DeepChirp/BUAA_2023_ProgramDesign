#include <stdio.h>
#include <string.h>

int main()
{
    char ractional[100005]; // 小数部分
    int exponent;
    int index = 0;
    scanf("%[^e]e%d", ractional, &exponent);

    int len = strlen(ractional);

    if (ractional[0] == '-')
    {
        putchar('-');
        index++;
    }

    if (exponent < 0)
    {
        putchar('0');
        putchar('.');
        for (int i = 0; i < -exponent - 1; i++)
        {
            putchar('0');
        }
        for (int i = index; i < len; i++)
        {
            if (ractional[i] != '.')
            {
                putchar(ractional[i]);
            }
        }
    }
    else if (exponent >= 0 && exponent < len - index - 2)
    {
        for (int i = index; i < len; i++)
        {
            if (ractional[i] != '.')
            {
                putchar(ractional[i]);
            }
            if (i == index + exponent + 1)
            {
                putchar('.');
            }
        }
    }
    else
    {
        if (ractional[index] != '0')
        {
            putchar(ractional[index]);
        }
        for (int i = index + 1; i < len; i++)
        {
            if (ractional[i] != '.')
            {
                putchar(ractional[i]);
            }
        }
        for (int i = 0; i < exponent - len + index + 2; i++)
        {
            putchar('0');
        }
    }

    return 0;
}
