#include <math.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum1 = 0, sum2 = 0;
    double pi1, pi2;
    int sign = 1;
    for (int u = 0; u < n; ++u) {
        sum1 += sign / (2u + 1);
        sum2 += 1 / ((2u + 1) * (2u + 1));
        sign = sign * -1;

        pi1 = sum1 * 4;
        pi2 = sqrt(sum2 * 8);
        printf("%.8f, %.8f\n", pi1, pi2);
    }
    return 0;
}