# Musha 的打印 Plus

时间限制：1000 ms / 空间限制：65536 KB / 难度：6

## 题目背景

Musha 十分认可你的能力与水平，她想让你也尝试一下这个题！

你需要读入一行 C 语言对 `printf` 的调用代码，并将其解析，按照格式字符串输出正确的结果。

为了防止你偷懒，Musha 对库函数动了一点手脚，详细介绍如下：

### 关于格式字符串

格式字符串中会出现 **四种格式转换符** 与 **两种转义字符**：

- `%%` 输出一个 `%`
- `%c` 输出一个字符
- `%d` 输出一个整数，以十进制格式（数据保证在  `int` 范围内）
- `%s` 输出一个字符串

对于**后两个**，你还需要考虑可能存在的位宽与对齐方式：

**位宽** 用一个正整数表示，表示在输出时应该对齐的宽度，不超过 32.

**对齐方式** 用一个字符表示（`<`：左对齐，默认情况；`^`：居中对齐，如果做不到完美居中，则偏向左侧；`>`：右对齐）。

**对齐方式先于位宽出现**，如 `%^12d` `%<12d` `%12d` `%>12d` `%^d` `%d` 都是合法的。

若实际 **输出长度大于等于设置的位宽**，或者 **没有设置位宽**，则忽略对齐方式。若出现了位宽，但是没有指定对齐方式，默认采用左对齐（`<`）。

转义字符如下：

- `\"` 输出为 `"`
- `\n` 输出为换行

### 关于待输出变量

后续待输出参数只会出现 **字面量**。

- 整数字面量：只出现十进制的情形，可能存在前导负号，保证没有前导零，保证在 `int` 范围内
- 字符字面量：用单引号包裹，只会出现 `'\''` 与 `'\n'` 这两种转义字符
- 字符串字面量：用双引号包裹，只会出现 `'\"'` 与 `'\n'` 这两种转义字符

### 关于语法

同 C 语言要求一致，例如 `printf("%d",123);`。

也正是因为与 C 语言要求一致，在很多位置会存在不定数目的空格，但保证不会打断 `printf` 与整数字面量。例如：

`printf ( "%s, %d %%\n" ,"qwerty",      32145  )  ;`

## 输入格式

共 $n + 1$ 行。

第一行一个整数 $n$，表示数据组数。

接下来 $n$ 行，每行一句。

## 输出格式

不定行输出，表示一次调用这 $n$ 行语句的打印输出结果。

注意，不要主动添加换行符！

## 数据范围

$ 1 \leqslant n \leqslant 10$

每行字符数在 1000 以内

## 输入样例

    2
     printf ( "%% %d %c %s" , 123 , 'F', "!!!\"\n" );
    printf("%^6d;%<6d;%>6d;%6d;%^d;", 123, 123, 123, 123, 123)

## 输出样例

    % 123 F !!!"
     123  ;123   ;   123;123   ;123;

## Hint

判题较为严格，空格数不对也判为 WA，而不是通常意义上的 PE

可以自行构造一些简单用例，逐步排查 Bug

## Bug 代码

    #include <ctype.h>
    #include <stdio.h>
    #include <string.h>

    char raw_string[1001];
    char *scan_ptr;

    void do_print(void);
    void print_char(void);
    void print_int(int, char);
    void print_string(int, char);
    void print_string_core(int, char, char *, int);

    int main(void) {
        int T;
        scanf("%d", &T);
        (void) getchar();
        while (T--) {
            do_print();
        }
        return 0;
    }

    void do_print(void) {
        gets(raw_string);

        char *fmt_start = strchr(raw_string, '"');
        char *fmt_end = fmt_start;
        for (;;) {
            fmt_end = strchr(fmt_end, '"');
            if (fmt_end[-1] != '\\') {
                break;
            }
        }

        scan_ptr = fmt_end;

        for (char *c = fmt_start + 1; c < fmt_end;) {
            if (*c == '\\') {
                if (c[1] == '"') {
                    putchar('"');
                }
                if (c[1] == 'n') {
                    putchar('\n');
                }
                ++c;
                continue;
            } else if (*c == '%') {
                if (c[1] == '%') {
                    putchar('%');
                    ++c;
                    continue;
                }
                char specifier, align = '<';
                int width = -1;
                if (c[1] == '^' || c[1] == '<' || c[1] == '>') {
                    align = c[1];
                    ++c;
                }
                if (c[1] == 'd' || c[1] == 's' || c[1] == 'c') {
                    specifier = c[1];
                } else {
                    width = 0;
                    while (isdigit(c[1])) {
                        width = width * 10 + c[1] - '0';
                        ++c;
                    }
                    if (c[1] == 'd' || c[1] == 's' || c[1] == 'c') {
                        specifier = c[1];
                    }
                }
                if (specifier == 'd') {
                    print_int(width, align);
                }
                if (specifier == 's') {
                    print_string(width, align);
                }
                if (specifier == 'c') {
                    print_char();
                }
                ++c;
                continue;
            } else {
                putchar(*c);
                ++c;
                continue;
            }
        }
    }

    void print_char(void) {
        char *char_start = strchr(scan_ptr, '\'');
        if (char_start[1] != '\\') {
            putchar(char_start[1]);
            scan_ptr = char_start + 3;
        } else {
            if (char_start[2] == '\'') {
                putchar('\'');
            }
            if (char_start[2] == 'n') {
                putchar('\n');
            }
            scan_ptr = char_start + 4;
        }
    }

    void print_int(int width, char align) {
        char *char_start = strchr(scan_ptr, ',') + 1;
        while (*char_start == ' ') {
            ++char_start;
        }

        char *char_end = char_start;

        while (*char_end == '-' || isdigit(*char_end)) {
            ++char_end;
        }

        print_string_core(width, align, char_start, char_end - char_start);
        scan_ptr = char_end;
    }

    void print_string(int width, char align) {
        char *char_start = strchr(scan_ptr, '"');
        char *char_end = char_start + 1;
        char to_be_print[1001];
        int to_be_print_len = 0;
        for (;;) {
            char_end = strchr(char_end + 1, '"');
            if (char_end[-1] != '\\') {
                break;
            }
        }
        for (char *c = char_start + 1; c < char_end; ++c) {
            if (*c != '\\') {
                to_be_print[to_be_print_len++] = *c;
            } else {
                if (c[1] == '"') {
                    to_be_print[to_be_print_len++] = '"';
                }
                if (c[1] == 'n') {
                    to_be_print[to_be_print_len++] = '\n';
                }
                ++c;
            }
        }
        print_string_core(width, align, to_be_print, to_be_print_len);
        scan_ptr = char_end + 1;
    }

    void print_string_core(int width, char align, char *start, int length) {
        if (length >= width) {
            for (int i = 0; i < length; ++i) {
                putchar(start[i]);
            }
        } else {
            int blank = width - length;
            if (align == '>') {
                while (blank--) {
                    putchar(' ');
                }
            } else if (align == '^') {
                for (int i = 1; i <= blank; ++i, --blank) {
                    putchar(' ');
                }
            }
            for (int i = 0; i < length; ++i) {
                putchar(start[i]);
            }
            if (align == '<' || align == '^') {
                while (blank--) {
                    putchar(' ');
                }
            }
        }
    }

$Author:kai_Ker$
