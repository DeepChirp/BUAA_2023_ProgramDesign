# 繁琐的BUG

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目背景

怠惰且笨拙的Uanu写的代码非常繁琐。当协作时，别人都抱怨看不懂Uanu的代码，着急的Uanu找到了你，想让你帮他把代码简化下！

## 题目描述

现在你需要处理一份**繁琐**的C语言代码，你需要对其进行如下处理：

* 删除代码中的注释：
  * 单行注释：以`//`开始，以换行符结束，**不包括换行符**。
  * 多行注释：以`/*`开始，以`*/`结束。

**如果有疑问，请一定要看数据说明。**

## 输入格式

不定行输入，即一段C语言编写的程序代码，长度不超过1000行。

## 输出格式

不定行输出，即简化后的代码。

## 输入样例

    #include <stdio.h>
    int a = 0; //Define variable

    int main() { /*Define function*/a=1;
        goto label;
     printf("%d", a); //Output
        label:
     return 0;
    }

## 输出样例

    #include <stdio.h>
    int a = 0;

    int main() { a=1;
        goto label;
     printf("%d", a);
        label:
     return 0;
    }

## 数据说明

* 字符常量和字符串字面量中不包含转义字符`\'`和`\"`
* 每行字符数不超过200
* 保证引号成对出现
* C语言中，字符常量和字符串字面量中出现的`//`或`/*`不会被视为注释的开始
* 输入中未被注释的空白符（空格符，制表符，换行符）应当被保留，结尾无换行
* 无需考虑注释内的内容和简化后程序的正确性

## Bug代码

    #include <stdio.h>

    #define DEFAULT 0
    #define SINGLE_QUOTE 39
    #define DOUBLE_QUOTE 34
    #define SLASH 1
    #define IN_MULTIPLE_COMMENT 2
    #define PRE_END_MULTIPLE_COMMENT 3

    int main()
    {
        int x = DEFAULT;
        char c, null[1001];
        while (~scanf("%c", &c))
            switch (x)
            {
            case DEFAULT:
                if (c == '\'' || c == '"')
                {
                    x = c;
                    putchar(c);
                }
                else if (c == '/')
                    x = SLASH;
                else
                    putchar(c);
                break;
            case SINGLE_QUOTE:
            case DOUBLE_QUOTE:
                putchar(c);
                if (c == x)
                    x = DEFAULT;
                break;
            case SLASH:
                if (c == '/')
                {
                    gets(null);
                    x = DEFAULT;
                }
                else if (c == '*')
                    x = IN_MULTIPLE_COMMENT;
                else
                {
                    putchar('/');
                    putchar(c);
                    x = DEFAULT;
                }
                break;
            case IN_MULTIPLE_COMMENT:
                if (c == '*')
                    x = PRE_END_MULTIPLE_COMMENT;
                break;
            case PRE_END_MULTIPLE_COMMENT:
                if (c == '/')
                    x = DEFAULT;
                else
                    x = IN_MULTIPLE_COMMENT;
                break;
            }
        return 0;
    }

author: Uanu

$\text{Adapted by}:\mathcal{Red}$
