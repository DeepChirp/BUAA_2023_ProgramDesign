#include <stdio.h>

double myPow(int n, int power)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= power;
    }
    return result;
}

void printBinary(int n, int N)
{
    for (int i = N; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int V, N;
    scanf("%d%d", &V, &N);

    double voltage;
    while (scanf("%lf", &voltage) != EOF)
    {
        double step = 2 * V / myPow(N, 2);
        int level = (voltage + V) / step;

        // 过载情况
        if (level < 0)
        {
            level = 0;
        }
        else if (level > myPow(N, 2))
        {
            level = myPow(N, 2) - 1;
        }

        if (voltage >= 0)
        {
            putchar('1');
            printBinary(level, N - 2);
        }
        else
        {
            putchar('0');
            printBinary(myPow(N, 2) - 1 - level, N - 2);
        }
    }

    return 0;
}
