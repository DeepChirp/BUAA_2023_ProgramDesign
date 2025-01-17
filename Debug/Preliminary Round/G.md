# Musha 也要学汇编

时间限制：1000 ms / 空间限制：65536 KB / 难度：3

## 题目背景

Musha 最近在学汇编，她觉得很有意思，想让你也来试一试。

考虑到你应该没有学过这个，她想先找 **四条指令** 给你试一试。

你需要维护 32 个寄存器的值，每个寄存器可以存储一个 32 位的整数，在这个题设中，所有的计算均为无符号的（也即，不用考虑溢出的问题）。

这些寄存器分别编号为 `$0` 至 `$31`，它们的初始值均为 $0$，并且，**零号寄存器 `$0` 的值永远为** $0$，而其他寄存器可以自由赋值。

Musha 想教给你的只有下列四条指令：

- **`addu $k, $i, $j`**：将 `$i` 与 `$j` 中的数作无符号加法，并将结果存储在 `$k` 中
- **`subu $k, $i, $j`**：将 `$i` 与 `$j` 中的数作无符号减法，并将结果存储在 `$k` 中（`$i - $j`）
- **`swap $i, $j`**：将 `$i` 与 `$j` 中的内容取出来，并放入对方寄存器，即将它们的内容进行交换，其中，若它们中**至少有一个**是 `$0`，那么在操作后，两个寄存器的值都为 $0$
- **`li $k, val`**：将无符号整数 `val` 存入 `$k`

## 输入格式

共 $n + 1$ 行。

只有一组测试数据，第一行一个正整数 $n$，表示接下来指令的条数。

接下来 $n$ 行，每行一句指令，指令格式严格按照上面的叙述。

## 输出格式

你需要模拟这 $n$ 行指令的行为，并在最后打印输出这 32 个寄存器的值，以**八位十六进制大写字母**的格式输出，高位补 0；每行 4 个，以空格隔开。共输出 8 行。

## 数据范围

$1 \leqslant n \leqslant 100$，每行字符串不超过 32 个字符。

保证寄存器编号正确且 $i$，$j$，$k$ 可以是任何一个合法编号，保证 `li` 指令中的无符号整数在 32 位无符号整型的范围中。

## 输入样例

    6
    li $0, 12345
    li $3, 67890
    addu $2, $3, $0
    li $1, 13579
    subu $2, $2, $1
    swap $2, $3

## 输出样例

    00000000 0000350B 00010932 0000D427
    00000000 00000000 00000000 00000000
    00000000 00000000 00000000 00000000
    00000000 00000000 00000000 00000000
    00000000 00000000 00000000 00000000
    00000000 00000000 00000000 00000000
    00000000 00000000 00000000 00000000
    00000000 00000000 00000000 00000000

## Bug 代码

    #include <stdio.h>
    #include <string.h>

    unsigned int regfile[32];

    void addu(int k, int i, int j) {
        regfile[k] = regfile[i] + regfile[j];
    }

    void subu(int k, int i, int j) {
        regfile[k] = regfile[i] - regfile[j];
    }

    void swap(int i, int j) {
        // Explanation: let a = regfile[i], b = regfile[j]
        regfile[i] = regfile[i] ^ regfile[j]; // regfile[i]: a ^ b
        regfile[j] = regfile[i] ^ regfile[j]; // regfile[j]: (a ^ b) ^ b == a
        regfile[i] = regfile[i] ^ regfile[j]; // regfile[i]: (a ^ b) ^ a == b
    }

    void loadi(int k, unsigned int val) {
        regfile[k] = val;
    }

    int main() {
        int n, i, j, k;
        unsigned int val;
        char instruction[8];

        scanf("%d", &n);
        while (n--) {
            scanf("%s", instruction);
            if (strcmp(instruction, "addu") == 0) {
                scanf(" $%d, $%d, $%d", &k, &i, &j);
                addu(k, i, j);
            } else if (strcmp(instruction, "subu") == 0) {
                scanf(" $%d, $%d, $%d", &k, &i, &j);
                subu(k, i, j);
            } else if (strcmp(instruction, "swap") == 0) {
                scanf(" $%d, $%d", &i, &j);
                swap(i, j);
            } else if (strcmp(instruction, "li") == 0) {
                scanf(" $%d, %u", &k, &val);
                loadi(k, val);
            }
            regfile[0] = 0;
        }

        for (i = 0; i < 32; ++i) {
            printf("%08X ", regfile[i]);
            if (i % 4 == 3) {
                printf("\n");
            }
        }
        return 0;
    }

$Author:kai_Ker$
