#include <stdio.h>
#include <math.h>

double measure[1001] = {0};

int main()
{
    double sum = 0;
    double sum2 = 0;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &measure[i]);
        sum += measure[i];
        sum2 += measure[i] * measure[i];
    }

    double average = sum / n;

    printf("%.6lf\n", average);
    printf("%.6lf\n", sqrt((sum2 - n * pow(average, 2)) / (n * (n - 1))));

    return 0;
}
