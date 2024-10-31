#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        if (isupper(c) && c != 'A')
        {
            c -= 1;
        }
        putchar(c);
    }

    return 0;
}