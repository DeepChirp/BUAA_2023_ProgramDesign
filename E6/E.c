#include <stdio.h>
#include <string.h>
#include <math.h>

char password[100001];

int main()
{
    fgets(password, 100001, stdin);

    // 去掉结尾处的换行符
    password[strcspn(password, "\n")] = '\0';

    int length = strlen(password);
    int a = ceil((double)(sqrt(length))); // 存储矩阵的行数与列数

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            int index = j * a + i;
            if (index < length)
            {
                printf("%c", password[index]);
            }
        }
    }

    return 0;
}
