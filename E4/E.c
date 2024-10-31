#include <stdio.h>

// 判断是否为闰年
int isLeapYear(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int main()
{
    int DaysinMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 指定循环次数
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int year, month, day, hour, minute;
        scanf("%d.%d.%d %d:%d", &year, &month, &day, &hour, &minute);

        // 处理分钟
        if (minute >= 60)
        {
            hour += (minute / 60);
            minute = minute % 60;
        }

        // 处理小时
        if (hour >= 24)
        {
            day += (hour / 24);
            hour = hour % 24;
        }

        // 处理月份
        while (month > 12)
        {
            year++;
            month -= 12;
        }

        while (day > DaysinMonth[month])
        {
            if (month == 2 && isLeapYear(year) && day > 29)
            {
                day -= 29;
            }
            else if (month == 2 && isLeapYear(year) && day == 29)
            {
                break;
            }
            else
            {
                day -= DaysinMonth[month];
            }
            month++;

            if (month > 12)
            {
                year++;
                month = 1;
            }
        }

        printf("%d.%02d.%02d %02d:%02d\n", year, month, day, hour, minute);
    }

    return 0;
}