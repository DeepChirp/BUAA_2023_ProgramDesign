#include <stdio.h>
#include <string.h>

// 将星期几转换为数字的函数
int convertWeekdayToNumber(const char *weekdayStr)
{
    int weekday;

    if (strcmp(weekdayStr, "Mon") == 0)
        weekday = 1;
    else if (strcmp(weekdayStr, "Tue") == 0)
        weekday = 2;
    else if (strcmp(weekdayStr, "Wed") == 0)
        weekday = 3;
    else if (strcmp(weekdayStr, "Thu") == 0)
        weekday = 4;
    else if (strcmp(weekdayStr, "Fri") == 0)
        weekday = 5;
    else if (strcmp(weekdayStr, "Sat") == 0)
        weekday = 6;
    else if (strcmp(weekdayStr, "Sun") == 0)
        weekday = 7;
    else
        weekday = 0; // 未知星期

    return weekday;
}

// 判断是否为闰年的函数
int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1; // 是闰年
    else
        return 0; // 不是闰年
}

// 获取当月的天数
int getDaysInMonth(int year, int month)
{
    int daysInMonth;

    switch (month)
    {
    case 1:  // January
    case 3:  // March
    case 5:  // May
    case 7:  // July
    case 8:  // August
    case 10: // October
    case 12: // December
        daysInMonth = 31;
        break;
    case 4:  // April
    case 6:  // June
    case 9:  // September
    case 11: // November
        daysInMonth = 30;
        break;
    case 2: // February
        if (isLeapYear(year))
            daysInMonth = 29;
        else
            daysInMonth = 28;
        break;
    default:
        daysInMonth = 0; // 无效的月份
        break;
    }

    return daysInMonth;
}

// 计算下一个交易日的函数
void getNextTradingDay(int *year, int *month, int *day)
{
    int daysInMonth = getDaysInMonth(*year, *month);

    (*day)++;

    if (*day > daysInMonth)
    {
        (*month)++;
        *day = 1;
    }

    if (*month > 12)
    {
        (*year)++;
        *month = 1;
    }
}

int main()
{
    int year, month, day, hour, minute, second;
    char weekdayStr[4];

    scanf("%d/%d/%d %d:%d:%d %s", &year, &month, &day, &hour, &minute, &second, weekdayStr);

    // 转换星期几为数字
    int weekdayNumber = convertWeekdayToNumber(weekdayStr);

    // 判断是否为交易时段，或者是非交易时段，但下个交易时段在当天
    if ((weekdayNumber >= 1 && weekdayNumber <= 5) && (hour < 15 || (hour == 15 && minute == 0 && second == 0)))
    {
        // 当天为交易时段，直接输出当前日期
        printf("%04d/%02d/%02d\n", year, month, day);
    }
    else
    {
        // 当天为非交易时段，计算下一个交易日的日期
        if (weekdayNumber == 5) // 如果是星期五
        {
            // 跳过周末，获取下一个交易日
            getNextTradingDay(&year, &month, &day);
            getNextTradingDay(&year, &month, &day);
            getNextTradingDay(&year, &month, &day);
        }
        else if (weekdayNumber == 6) // 如果是星期六
        {
            // 跳过周末，获取下一个交易日
            getNextTradingDay(&year, &month, &day);
            getNextTradingDay(&year, &month, &day);
        }
        else
        {
            getNextTradingDay(&year, &month, &day);
        }

        printf("%04d/%02d/%02d\n", year, month, day);
    }

    return 0;
}