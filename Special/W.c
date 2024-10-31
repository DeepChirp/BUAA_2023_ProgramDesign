#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[1000001];
    int sum = 0;
    int continuation = 1;
    scanf("%s", str);
    int len = strlen(str);

    for (int i = 1; i < len; i++)
    {
        if (str[i] == str[i - 1])
        {
            continuation++;
        }
        else
        {
            sum += pow(2, continuation) - 1;
            continuation = 1;
        }
        if (i == len - 1)
        {
            sum += pow(2, continuation) - 1;
        }
    }

    printf("%d", sum);

    return 0;
}
