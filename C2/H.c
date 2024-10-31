#include <stdio.h>
#include <math.h>

int main()
{
    double m;
    int a, b, c, d;
    double acc, rks;
    while (scanf("%lf%d%d%d%d", &m, &a, &b, &c, &d) != EOF)
    {
        double acc = ((a * 1 + b * 0.65) / (a + b + c + d));
        if (acc > 0.7 - 1e-10)
        {
            rks = pow(((acc - 0.55) / 0.45), 2) * m;
        }
        else
        {
            rks = 0;
        }

        printf("%.*f%% %.4lf\n", 4 - ((int)log10(acc * 100) + 1), acc * 100, rks);
    }

    return 0;
}
