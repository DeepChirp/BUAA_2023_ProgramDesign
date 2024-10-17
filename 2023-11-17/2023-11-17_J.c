#include <stdio.h>
#include <string.h>

int main()
{
    char str1[105], str2[105];
    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int index1 = len1 - 1;
    int index2 = 0;

    while (str1[index1] == str2[index2])
    {
        int length1 = 0;
        int length2 = 0;
        char str = str1[index1];
        while (index1 >= 0 && str1[index1] == str)
        {
            index1--;
            length1++;
        }
        while (index2 < len2 && str2[index2] == str)
        {
            index2++;
            length2++;
        }
        if (length1 + length2 < 3)
        {
            index1 += length1;
            index2 -= length2;
            break;
        }
    }

    for (int i = 0; i <= index1; i++)
    {
        printf("%c", str1[i]);
    }
    for (int i = index2; i < len2; i++)
    {
        printf("%c", str2[i]);
    }

    return 0;
}
