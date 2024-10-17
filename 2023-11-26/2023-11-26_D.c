#include <stdio.h>

int main()
{
    char former = 'N';
    char ch;
    while ((ch = getchar()) != EOF)
    {
        switch (former)
        {
        case 'N':
            switch (ch)
            {
            case 'N':
                putchar('F');
                break;
            case 'E':
                putchar('R');
                break;
            case 'S':
                putchar('B');
                break;
            case 'W':
                putchar('L');
                break;
            default:
                break;
            }
            break;

        case 'E':
            switch (ch)
            {
            case 'E':
                putchar('F');
                break;
            case 'S':
                putchar('R');
                break;
            case 'W':
                putchar('B');
                break;
            case 'N':
                putchar('L');
                break;
            default:
                break;
            }
            break;
        case 'S':
            switch (ch)
            {
            case 'S':
                putchar('F');
                break;
            case 'W':
                putchar('R');
                break;
            case 'N':
                putchar('B');
                break;
            case 'E':
                putchar('L');
                break;
            default:
                break;
            }
            break;
        case 'W':
            switch (ch)
            {
            case 'W':
                putchar('F');
                break;
            case 'N':
                putchar('R');
                break;
            case 'E':
                putchar('B');
                break;
            case 'S':
                putchar('L');
                break;
            default:
                break;
            }
            break;

        default:
            break;
        }
        former = ch;
    }

    return 0;
}
