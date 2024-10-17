#include <stdio.h>

int Koishi(int n, char from, char via, char to)
{
    if (n == 1)
    {
        move(n, from, to);
    }
    else
    {
        Koishi(n - 1, from, to, via);
        move(n, from, to);
        Koishi(n - 1, via, from, to);
    }
}

void move(int n, char from, char to)
{
    printf("Eika moved Koishi %02d form the %c to the %c\n", n, from, to);
}

int main()
{
    char a, b, c;
    int n;
    scanf("%c %c %c", &a, &b, &c);
    scanf("%d", &n);

    Koishi(n, a, b, c);

    return 0;
}
