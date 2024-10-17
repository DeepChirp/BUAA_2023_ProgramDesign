#include <stdio.h>

int isEven(int n)
{
    return (n & 1) == 0;
}

int main()
{
    // 询问次数
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int onlyOdd = 0;
        int mix = 0;
        // 商店数量
        int n;
        scanf("%d", &n);
        while (n--)
        {
            int oddFlag = 0;
            int evenFlag = 0;
            // 篮子个数
            int m;
            scanf("%d", &m);
            while (m--)
            {
                int a;
                scanf("%d", &a);
                if (isEven(a))
                {
                    evenFlag = 1;
                }
                else
                {
                    oddFlag = 1;
                }
            }
            if (oddFlag && evenFlag)
            {
                mix++;
            }
            else if (oddFlag)
            {
                onlyOdd++;
            }
        }
        if (!isEven(onlyOdd) && mix == 0)
        {
            printf("bzjt!\n");
        }
        else
        {
            printf("siuuuuu\n");
        }
    }

    return 0;
}
