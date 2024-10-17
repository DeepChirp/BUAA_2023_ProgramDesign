#include <stdio.h>

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case '0':
            printf("0000");
            break;

        case '1':
            printf("0001");
            break;

        case '2':
            printf("0010");
            break;

        case '3':
            printf("0011");
            break;

        case '4':
            printf("0100");
            break;

        case '5':
            printf("1011");
            break;

        case '6':
            printf("1100");
            break;

        case '7':
            printf("1101");
            break;

        case '8':
            printf("1110");
            break;

        case '9':
            printf("1111");
            break;
        }
    }

    return 0;
}
