#include <stdio.h>
#include <string.h>

char str[1000000];
int main()
{
    int frequency[26] = {0};

    scanf("%s", str);

    int len = strlen(str);

    // 逐个读入字符
    for (int i = 0; i < len; i++)
    {
        frequency[str[i] - 'a']++; // 将相应字母出现的次数存入数组
    }

    // 寻找数组中最大的数
    int max = frequency[0];
    for (int i = 1; i < 26; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
        }
    }

    printf("%d", max);

    return 0;
}
