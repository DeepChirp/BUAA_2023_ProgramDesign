#include <stdio.h>

int main()
{
    int y = 0;

    // 逐位读取位数并储存到y变量中
    for (int i = 0; i < 32; i++)
    {
        unsigned int x;
        scanf("%1u", &x);
        y = y | (x << (31 - i)); // 将x放入y对应的位
    }

    printf("%d", y);
    /*
        if (y >> 31 == 1) // y为负数
        {
            printf("%d", -(~(y - 1)));
        }
        else // y为正数
        {
            printf("%d", y);
        }
    */

    return 0;
}
