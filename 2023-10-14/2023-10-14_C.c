#include <stdio.h>

int main()
{
    int is_AP = 1;           // 是否为All Perfect!
    int is_FC = 1;           // 是否为Full Combo!
    long long int score = 0; // 分数
    int combo = 0;           // 当前连击数
    int max_combo = 0;       // 最大连击数

    // 指定循环次数
    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        int ch = getchar();
        getchar(); // 丢弃换行符

        if (ch == 'p')
        {
            score += 300;
            combo++;
        }
        else if (ch == 'g')
        {
            score += 208;
            combo++;
            if (is_AP == 1)
            {
                is_AP = 0;
            }
        }
        else if (ch == 'b')
        {
            score += 105;
            max_combo = combo > max_combo ? combo : max_combo;
            combo = 0;
            if (is_AP == 1)
            {
                is_AP = 0;
            }
            if (is_FC == 1)
            {
                is_FC = 0;
            }
        }
        else if (ch == 'm')
        {
            max_combo = combo > max_combo ? combo : max_combo;
            combo = 0;
            if (is_AP == 1)
            {
                is_AP = 0;
            }
            if (is_FC == 1)
            {
                is_FC = 0;
            }
        }
    }

    printf("%lld\n", score);
    combo > max_combo ? printf("%d\n", combo) : printf("%d\n", max_combo);
    if (is_AP)
    {
        printf("All Perfect!\n");
    }
    else if (is_FC)
    {
        printf("Full Combo!\n");
    }
    else
    {
        printf("Moca Complete!\n");
    }

    return 0;
}
