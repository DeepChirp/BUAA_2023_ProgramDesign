#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 5 // 单词的最大长度（包括结尾的空字符）

int main()
{
    int n;
    scanf("%d", &n); // 输入单词数

    char word[MAX_LENGTH]; // 用于存储输入的单词

    // 定义一个标记数组，用于记录单词是否已经出现过
    char wordSeen[MAX_LENGTH][MAX_LENGTH];
    memset(wordSeen, 0, sizeof(wordSeen)); // 初始化标记数组为0

    for (int i = 0; i < n; i++)
    {
        int isValid; // 用于验证输入是否有效

        // 读取输入的单词，并进行验证
        do
        {
            isValid = 1; // 假设输入有效
            scanf("%s", word);

            if (strlen(word) != 4)
            {
                printf("Invalid input. Please enter 4 lowercase letters.\n");
                isValid = 0; // 输入无效
            }
            else
            {
                for (int j = 0; j < 4; j++)
                {
                    if (!islower(word[j]))
                    {
                        printf("Invalid input. Please enter 4 lowercase letters.\n");
                        isValid = 0; // 输入无效
                        break;
                    }
                }
            }
        } while (!isValid);

        // 判断单词是否已经出现过
        int isSeen = 0;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(word, wordSeen[j]) == 0)
            {
                isSeen = 1;
                break;
            }
        }

        if (isSeen)
        {
            printf("Moca has already memorized this word!\n");
        }
        else
        {
            printf("Moca memorized a new word!\n");
            strcpy(wordSeen[i], word); // 将单词存储到标记数组中
        }
    }

    return 0;
}