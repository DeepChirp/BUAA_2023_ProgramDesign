#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n;

    scanf("%d", &n);

    while (n--)
    {
        int A, B;

        scanf("%d%d", &A, &B);

        if (A == 0 && B >= 6 && B <= 18) // 0个红色，3个黑色
        {
            printf("Yes\n");
        }
        else if ((A == 1 || A == 4) && 4 <= B && B <= 12) // 1个红色，2个黑色
        {
            printf("Yes\n");
        }
        else if ((A == 2 || A == 5 || A == 8) && (B == 2 || B == 3 || B == 5 || B == 6)) // 2个红色，1个黑色
        {
            printf("Yes\n");
        }
        else if ((A == 3 || A == 6 || A == 9 || A == 12) && B == 0) // 3个红色，0个黑色
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}