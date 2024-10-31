#include <stdio.h>

int main()
{
    int n;
    int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int b[17];
    char num;
    char checksums;
    char checksums1;
    int sum = 0;

    scanf("%d", &n);

    while (n--)
    {
        getchar();
        for (int i = 0; i < 17; i++)
        {
            num = getchar();
            b[i] = num - '0';
        }
        checksums = getchar();

        for (int i = 0; i < 17; i++)
        {
            sum += (a[i] * b[i]);
        }

        switch (sum % 11)
        {
        case 0:
            checksums1 = '1';
            break;
        case 1:
            checksums1 = '0';
            break;
        case 2:
            checksums1 = 'X';
            break;
        case 3:
            checksums1 = '9';
            break;
        case 4:
            checksums1 = '8';
            break;
        case 5:
            checksums1 = '7';
            break;
        case 6:
            checksums1 = '6';
            break;
        case 7:
            checksums1 = '5';
            break;
        case 8:
            checksums1 = '4';
            break;
        case 9:
            checksums1 = '3';
            break;
        case 10:
            checksums1 = '2';
            break;
        }
        if (checksums1 == checksums)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum = 0;
    }

    return 0;
}
