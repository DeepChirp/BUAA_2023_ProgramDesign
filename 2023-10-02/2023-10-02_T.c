#include <stdio.h>

int main()
{
    FILE *file = fopen(__FILE__, "r"); // 打开当前源代码文件
    char c;

    if (file)
    {
        while ((c = fgetc(file)) != EOF)
        { // 逐字符读取文件内容并输出
            putchar(c);
        }
        fclose(file); // 关闭文件
    }

    return 0;
}