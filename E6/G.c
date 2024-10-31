#include <stdio.h>
#include <string.h>

int main()
{
    char code[1001];
    scanf("%s", code);

    int len = strlen(code);

    // 1.加V
    for (int i = 0; i < len - 3; i++)
    {
        if (code[i] == '0' && code[i + 1] == '0' && code[i + 2] == '0' && code[i + 3] == '0')
        {
            code[i + 3] = 'V';
            i += 3;
        }
    }

    // 2.加B
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (code[i] == 'V')
        {
            if (num % 2 == 0)
            {
                code[i - 3] = 'B';
            }
            num = 0;
        }
        else if (code[i] != '0')
        {
            num++;
        }
    }

    // 3.对信码加符号
    // 4.对V加符号
    int flag = 1; // 判断正负号，1为正，-1为负
    for (int i = 0; i < len; i++)
    {
        if (code[i] == '0')
        {
            putchar('0');
        }
        else if (code[i] == '1' || code[i] == 'B')
        {
            flag == 1 ? putchar('+') : putchar('-');
            putchar('1');
            flag = -flag;
        }
        else if (code[i] == 'V')
        {
            flag == -1 ? putchar('+') : putchar('-'); // 与上一个符号相同
            putchar('1');
        }

        putchar(' ');
    }

    return 0;
}
