#include <stdio.h>

int main()
{
    int n;
    int k[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char checksums[] = "10X98765432";
    char num;
    char checksum;
    int sum;

    scanf("%d", &n);

    while (n--)
    {
        getchar();
        sum = 0;
        for (int i = 0; i < 17; i++)
        {
            num = getchar();
            sum += (k[i] * (num - '0'));
        }
        checksum = getchar();

        if (checksum == checksums[sum % 11])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
