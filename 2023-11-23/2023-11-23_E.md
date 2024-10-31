# Musha 的咒语

时间限制：1000 ms / 空间限制：65536 KB / 难度：2

## 题目背景

Musha 最近在学习咒语，她学了很多很多，但其中有些部分不太对，她想让你帮忙识别一下这些咒语的正确与否。

不对不对，说了，今天不要你来帮忙，呃，其实她自己也可以作出判断，只是，呃，要不你还是去帮她算一下吧？她会请你吃糖！૮꒰ ˶• ༝ •˶꒱ა

每条咒语均由 `$` 和英文字母组成，并由**至少一个** `$` 作为分隔符，被分成了若干个 “子咒语”，如下所示，是一个由三个子咒语组成的一条咒语。

    $aAeE$$aaDD$ZXc$
     ^^^^  ^^^^ ^^^

对于每个非空子咒语，统计其中的小写字母个数与大写字母个数，若其中的**小写字母个数不小于大写字母个数**，则记为**一条合法的子咒语**。

你需要去统计这一整条咒语中，合法子咒语的个数。

## 输入格式

共 $n + 1$ 行。

第一行一个整数 $n$，表示数据的组数。

接下来的 $n$ 行，每行有一个仅由英文字母与 `$` 组成的字符串，为 Musha 学习的咒语。

## 输出格式

共 $n$ 行，为每条咒语中合法子咒语的个数。

## 数据范围

$1 \leqslant n \leqslant 10$

每条咒语仅有英文字母与 `$` 组成，并且不超过 500 个字符。同时，数据保证，每条咒语的**开头与结尾均为 `$`**，并且至少有一个子咒语。

## 输入样例

    2
    $aAaa$A$$
    $aQQ$

## 输出样例

    1
    0

## Bug 代码

    #include <ctype.h>
    #include <stdio.h>
    #include <string.h>

    char incantation[512];

    int main() {
        int T;
        scanf("%d", &T);
        while (T--) {
            scanf("%s", incantation);
            unsigned length = strlen(incantation);
            int valid_count = 0;
            unsigned i = 0;

            while (i < length) {
                if (incantation[i] == '$') {
                    i++;
                    break;
                }

                int lower_count = 0, upper_count = 0;

                while (i < length && incantation[i] != '$') {
                    lower_count += islower(incantation[i]);
                    upper_count += isupper(incantation[i]);
                }

                valid_count += lower_count >= upper_count;
            }

            printf("%d\n", valid_count);
        }
        return 0;
    }

$Author:kai_Ker$

感谢作者亲爱的 OO 助教对题目思路的启发！
