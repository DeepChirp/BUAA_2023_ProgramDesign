#include <stdio.h>

int main()
{
    int n;         // 总举动次数
    int x;         // 余额
    int a;         // 超市苹果数量
    int b;         // 超市香蕉数量
    int own_a = 0; // 拥有苹果数量
    int own_b = 0; // 拥有香蕉数量
    scanf("%d%d%d%d", &n, &x, &a, &b);

    int u; // 举动的类型
    int v; // 水果的种类
    while (n--)
    {
        scanf("%d%d", &u, &v);

        // u=0时，表示购买一个水果
        if (u == 0)
        {
            int price = (v == 0) ? 3 : 2;
            // 余额充足时且超市有库存时可以购买，此时超市相应的水果数量减一，拥有的水果数量加一
            if (x - price >= 0)
            {
                if (v == 0)
                {
                    if (a > 0)
                    {
                        x -= price;
                        a--;
                        own_a++;
                        printf("Ok!\n");
                    }
                    else
                    {
                        printf("Failed!\n");
                    }
                }
                else if (v == 1)
                {
                    if (b > 0)
                    {
                        x -= price;
                        b--;
                        own_b++;
                        printf("Ok!\n");
                    }
                    else
                    {
                        printf("Failed!\n");
                    }
                }
            }
            // 余额不足时无法购买
            else
            {
                printf("Failed!\n");
            }
        }

        // u=1时，表示食用一个水果
        else if (u == 1)
        {
            if ((v == 0 && own_a > 0) || (v == 1 && own_b > 0))
            {
                if (v == 0)
                {
                    own_a--;
                }
                else
                {
                    own_b--;
                }
                printf("Ok!\n");
            }
            else
            {
                printf("Failed!\n");
            }
        }
    }
    printf("%d %d %d\n", a, b, x);
    return 0;
}