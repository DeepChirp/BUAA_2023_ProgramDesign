#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chemicalFormula[202] = {0};      // 化学式
    fgets(chemicalFormula, 201, stdin);   // 读取化学式
    int length = strlen(chemicalFormula); // 化学式长度
    int result = 0;                       // 相对分子质量

    for (int i = 0; i < length; i++)
    {
        int mean = 0; // 原子量

        // 判断原子种类
        switch (chemicalFormula[i])
        {
        case 'C':
            mean = 12;
            break;

        case 'H':
            mean = 1;
            break;

        case 'O':
            mean = 16;
            break;

        case 'N':
            mean = 14;
            break;

        default:
            break;
        }

        if (isalpha(chemicalFormula[i + 1]) || chemicalFormula[i + 1] == '\n' || chemicalFormula[i + 1] == '\0') // 下一个字符为字母或换行符或结束符
        {
            result += mean;
        }
        else if (isdigit(chemicalFormula[i + 1])) // 下一个字符为数字
        {
            int num = 0;
            while (isdigit(chemicalFormula[i + 1]))
            {
                num = num * 10 + (chemicalFormula[i + 1] - '0');
                i++;
            }
            result += mean * num;
        }
    }

    printf("%d\n", result);

    return 0;
}
