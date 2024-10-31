#include <stdio.h>

int main()
{
    char ch;
    char symbol = '+';
    while ((ch = getchar()) != EOF)
    {
        if (ch == '0')
        {
            putchar('0');
        }
        else if (ch == '1')
        {
            putchar(symbol);
            if (symbol == '+')
            {
                symbol = '-';
            }
            else
            {
                symbol = '+';
            }
            putchar('1');
        }

        putchar(' ');
    }

    return 0;
}
