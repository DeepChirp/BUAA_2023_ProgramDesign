# 这里是 BUAA 2

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

czx 作为刚来到 BUAA 的新同学，不小心将学校的简称记错了！他将 BUAA 记成了 CVBB，从而在一些字符中将它拼错了。

不难发现，他在记忆时把所有的字符都 **往后记了一位**，即把 ``B`` 记成了后一个字母 ``C``，把 ``U`` 记成了后一个字母 ``V``，把 ``A`` 记成了后一个字母 ``B``。从而把 BUAA 记成了 CVBB。

为了避免遭受批评，现在他需要将句子中打错了的 ``CVBB`` 改成正确的 ``BUAA``。并且，czx 是一个很懒惰的人，他为了偷懒，决定无差别的把所有的字母都改成它的上一个（即 ``Z`` 改成 ``Y``，``Y`` 改成 ``X``，以此类推。**特别的，字母 ``A`` 不做改动，空格、标点等非字母的字符不做改动）**。

请你帮他完成这项工作吧！

## 输入

一行字符串，由大写字母、标点、空格组成。数据保证总字符数量不超过 $10^4$。

## 输出

一行，表示输入的字符串按题目描述改动后得到的结果。

## 输入样例

    ABCDEF,GHI JKL MNOP. QRSTUV WXYZ!

## 输出样例

    AABCDE,FGH IJK LMNO. PQRSTU VWXY!

## Hint

结合 ``AscII码表`` 与字符的关系，考虑怎么样可以不用写 $26$ 个条件语句来完成修改。

 *Author：czx*
