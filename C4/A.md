# 免修考试结果

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

在上个月底部分同学报名参与了免修考试，请给出免修结果。

当给出一个学生的入学年份 $year$ 和免修考试成绩 $score$ ，请按以下要求输出：

对于2023级新生： $score>=85$ ，输出该成绩，并在下一行输出 `You can choose whether to take the course or not.` ； $score<85$ ，输出 `You have to take the course.` 。

对于非2023级新生： $score>=60$ ，输出该成绩； $score<60$ ，输出 `You have to take the course.` 。

## 输入

**不定组数据输入**，保证数据组数不超过 $10000$

对于每组数据输入一行两个整数 $year, score$ ，分别表示该学生的入学年份和免修考试成绩

保证 $2020\le year\le 2023, 0\le score\le 100$

## 输出

对于每组数据，按要求输出一行或两行

## 输入样例

    2023 85
    2023 100
    2023 60
    2022 75
    2021 50

## 输出样例

    85
    You can choose whether to take the course or not.
    100
    You can choose whether to take the course or not.
    You have to take the course.
    75
    You have to take the course.
