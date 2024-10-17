#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[501];
    gets(str);
    int n = strlen(str);

    for (i = 0; i < n; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            str[i] = 105 - str[i];
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = 219 - str[i];
        }
    }

    printf("%s\n", str);

    return 0;
}
