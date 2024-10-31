#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        switch (n)
        {
        case 1:
            printf("Shall I compare thee to a summer's day?\n");
            break;
        case 2:
            printf("Thou art more lovely and more temperate:\n");
            break;
        case 3:
            printf("Rough winds do shake the darling buds of May,\n");
            break;
        case 4:
            printf("And summer's lease hath all too short a date;\n");
            break;
        case 5:
            printf("Sometime too hot the eye of heaven shines,\n");
            break;
        case 6:
            printf("And often is his gold complexion dimm'd;\n");
            break;
        case 7:
            printf("And every fair from fair sometime declines,\n");
            break;
        case 8:
            printf("By chance or nature's changing course untrimm'd;\n");
            break;
        case 9:
            printf("But thy eternal summer shall not fade,\n");
            break;
        case 10:
            printf("Nor lose possession of that fair thou ow'st;\n");
            break;
        case 11:
            printf("Nor shall death brag thou wander'st in his shade,\n");
            break;
        case 12:
            printf("When in eternal lines to time thou grow'st:\n");
            break;
        case 13:
            printf("    So long as men can breathe or eyes can see,\n");
            break;
        case 14:
            printf("    So long lives this, and this gives life to thee.\n");
            break;

        default:
            break;
        }
    }

    return 0;
}
