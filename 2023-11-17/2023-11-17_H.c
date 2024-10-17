#include <stdio.h>

unsigned int a[1005];
int count = 0;

int insert(int m, unsigned int x)
{
    if (count >= m)
    {
        // 哈希表已满，无法插入新的元素
        return -1;
    }

    int index = x % m;
    while (a[index] != 0)
    {
        index = (index + 1) % m;
    }
    a[index] = x;
    count++;
    return 0;
}

int main()
{
    int m, n;
    unsigned int x;
    scanf("%d%d", &m, &n);
    while (n--)
    {
        scanf("%u", &x);
        insert(m, x);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%u ", a[i]);
    }

    return 0;
}