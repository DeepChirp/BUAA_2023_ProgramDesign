#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
    // 1-26表示小写字母，27-52表示大写字母，53-62表示数字
    int num[63] = {0};
    int sum = 0;
    double H = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            num[ch - 'a' + 1]++;
            sum++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            num[ch - 'A' + 27]++;
            sum++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            num[ch - '0' + 53]++;
            sum++;
        }
    }

    for (int i = 1; i <= 62; i++)
    {
        if (num[i] != 0)
        {
            H -= (((double)num[i] / sum) * log2((double)num[i] / sum));
        }
    }

    printf("%.4lf\n", H);

    return 0;
}
