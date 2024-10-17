#include <stdio.h>
#include <string.h>

#define MAXN 10010

int a, b, r[MAX], s[MAX];

int main()
{
    scanf("%d%d", &a, &b);  // 输入分子和分母
    printf("%d.", a / b);   // 输出整数部分
    a %= b;                 // 计算余数
    int pos = 0;            // 存储当前计算的位数
    int flag = 0;           // 判断是否为无限循环小数
    while (a != 0 && !flag) // 如果余数不为0且没有出现循环节
    {
        r[pos] = a;                   // 存储当前余数
        s[pos] = a * 10 / b;          // 计算当前商
        for (int i = 0; i < pos; i++) // 从第0位到第pos-1位遍历数组r和s
        {
            if (r[i] == r[pos] && s[i] == s[pos]) // 如果出现了重复的商和余数
            {
                flag = 1;                   // 标记出现了循环节
                for (int j = 0; j < i; j++) // 输出循环节之前的部分
                {
                    printf("%d", s[j]);
                }
                printf("(");                  // 输出循环节的左括号
                for (int j = i; j < pos; j++) // 输出循环节的部分
                {
                    printf("%d", s[j]);
                }
                printf(")"); // 输出循环节的右括号
                break;       // 结束循环
            }
        }
        pos++;          // 计算下一位
        a = a * 10 % b; // 计算新的余数
    }
    if (!flag) // 如果没有出现循环节
    {
        for (int i = 0; i < pos; i++)
        {
            printf("%d", s[i]); // 输出小数部分
        }
        printf("(0)"); // 输出0作为循环节
    }
    return 0;
}