#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 结构体表示有理数
typedef struct
{
    long long numerator;   // 分子
    long long denominator; // 分母
} RationalNumber;

// 函数声明
void getInput(char *statement, char *variable, RationalNumber *value);
void add(RationalNumber *result, RationalNumber *op1, RationalNumber *op2);
void subtract(RationalNumber *result, RationalNumber *op1, RationalNumber *op2);
void multiply(RationalNumber *result, RationalNumber *op1, RationalNumber *op2);
void divide(RationalNumber *result, RationalNumber *op1, RationalNumber *op2);
int equals(RationalNumber *op1, RationalNumber *op2);
void output(RationalNumber *number, int decimalPlaces);

int main()
{
    char statement[100];
    char operator[10];
    char variable[10];
    RationalNumber value1;
    RationalNumber value2;
    int decimalPlaces;

    while (fgets(statement, sizeof(statement), stdin) != NULL)
    {
        sscanf(statement, "%s", operator);

        if (strcmp(operator, "INPUT") == 0)
        {
            getInput(statement, variable, &value1);
        }
        else if (strcmp(operator, "ADD") == 0)
        {
            sscanf(statement, "%s %s %s", operator, variable, variable);
            add(&value1, &value1, &value2);
        }
        else if (strcmp(operator, "SUB") == 0)
        {
            sscanf(statement, "%s %s %s", operator, variable, variable);
            subtract(&value1, &value1, &value2);
        }
        else if (strcmp(operator, "MUL") == 0)
        {
            sscanf(statement, "%s %s %s", operator, variable, variable);
            multiply(&value1, &value1, &value2);
        }
        else if (strcmp(operator, "DIV") == 0)
        {
            sscanf(statement, "%s %s %s", operator, variable, variable);
            divide(&value1, &value1, &value2);
        }
        else if (strcmp(operator, "EQU") == 0)
        {
            sscanf(statement, "%s %s %s", operator, variable, variable);
            if (equals(&value1, &value2))
            {
                printf("%c == %c\n", variable[0], variable[1]);
            }
            else
            {
                printf("%c != %c\n", variable[0], variable[1]);
            }
        }
        else if (strcmp(operator, "OUTPUT") == 0)
        {
            sscanf(statement, "%s %d %s", operator, & decimalPlaces, variable);
            output(&value1, decimalPlaces);
        }
    }

    return 0;
}

// 从语句中获取输入
void getInput(char *statement, char *variable, RationalNumber *value)
{
    sscanf(statement, "%*s %s %lld/%lld", variable, &(value->numerator), &(value->denominator));
}

// 加法运算
void add(RationalNumber *result, RationalNumber *op1, RationalNumber *op2)
{
    result->numerator = (op1->numerator * op2->denominator) + (op2->numerator * op1->denominator);
    result->denominator = op1->denominator * op2->denominator;
}

// 减法运算
void subtract(RationalNumber *result, RationalNumber *op1, RationalNumber *op2)
{
    result->numerator = (op1->numerator * op2->denominator) - (op2->numerator * op1->denominator);
    result->denominator = op1->denominator * op2->denominator;
}

// 乘法运算
void multiply(RationalNumber *result, RationalNumber *op1, RationalNumber *op2)
{
    result->numerator = op1->numerator * op2->numerator;
    result->denominator = op1->denominator * op2->denominator;
}

// 除法运算
void divide(RationalNumber *result, RationalNumber *op1, RationalNumber *op2)
{
    if (op2->numerator == 0)
    {
        printf("LINE %d DIV BY ZERO!\n", __LINE__);
        return;
    }

    result->numerator = op1->numerator * op2->denominator;
    result->denominator = op1->denominator * op2->numerator;

    // 处理负数情况
    if (result->denominator < 0)
    {
        result->numerator = -result->numerator;
        result->denominator = -result->denominator;
    }
}

// 判断两个有理数是否相等
int equals(RationalNumber *op1, RationalNumber *op2)
{
    return (op1->numerator * op2->denominator) == (op2->numerator * op1->denominator);
}

// 输出有理数
void output(RationalNumber *number, int decimalPlaces)
{
    long long integerPart = number->numerator / number->denominator;
    long long remainder = number->numerator % number->denominator;

    // 判断是否输出整数
    if (remainder == 0)
    {
        printf("%lld\n", integerPart);
        return;
    }

    // 判断是否输出负数
    if (integerPart < 0)
    {
        remainder = -remainder;
    }

    // 输出分数形式
    if (decimalPlaces == 0)
    {
        printf("%lld/%lld\n", remainder, number->denominator);
    }
    else
    {
        // 计算小数部分
        char decimalPart[100];
        long long temp = remainder;
        int i = 0;

        do
        {
            temp *= 10;
            decimalPart[i++] = '0' + (temp / number->denominator);
            temp %= number->denominator;
        } while (i < decimalPlaces);

        decimalPart[i] = '\0';

        // 四舍五入
        if (temp >= (number->denominator / 2))
        {
            decimalPart[i - 1]++;
        }

        // 输出小数形式
        if (integerPart == 0)
        {
            printf("0.%s\n", decimalPart);
        }
        else
        {
            printf("%lld.%s\n", integerPart, decimalPart);
        }
    }
}