#include <stdio.h>
#include <string.h>

char a[1000005];

int main()
{
    unsigned long long m;
    scanf("%s %llu", a, &m);
    int len = strlen(a);
    unsigned long long ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans = (ans * 10 + (a[i] - '0')) % m; //(a + b) mod m = ((a mod m) + (b mod m)) mod m
    }
    printf("%llu\n", ans);
    return 0;
}