# 画画字符画画 2023

时间限制：1000 ms / 空间限制：65536 KB / 难度：1

## 题目描述

给定一个字符画，要求你编写一个程序 $A$，使 $A$ 的输出为另一个 C 语言程序 $B$，且 $B$ 的输出为给定的字符画。

## 输入

由若干个字符 $c$ 组成的字符画，保证 $c$ 为可见字符或换行符。每行不超过 $500$ 个字符，不超过 $100$ 行。

## 输出

一个 C 语言程序，其输出为给定的字符画。

## 输入样例

              *11 i
             ao   .%383i~+                                                     +.
            .o~;n!i~-!3!!!!!!%!-   .a$&&$$$$$$$$$&$%1^                 +nu638$  ;
              ~~i$63a!!!!!!!!!8#$$$$$$$$$$$$$$$$$$$$$$$$$@&;z$$3!i!3!!!!!!i-% i+ 1
           v. .  %1a+!!!3!$&$%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%###$$%%863!3!z~oz36;i~+
           .1;;8!z^z&&$%$$$$$$%$&$$$$$$$$$$$$$$$$$$$$$$$$$&&###@@@!!!!!!3!~*;z3!*  *
           v3a$%&%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%#@@@@888%%88ini!8u;1
          a~~;$$%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#@@@&%8%%%u!8$~~i
           *8$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$&$$$$$$$%$@@@@&%%oa!%u;!.
           $$$$$$$%#$$$$$$$$$&&%$$$$$$$$$$$$$$$$$%$$$$$$$$$@$$$$$$#$&ion%%%a3&^  ~u
         .annnu%$@$$$&$$$$$$##%%$#&%&$$$@$$$$$$$&$$$$$$##$%#@&81nnnnnnz8@&3888z~3^
         &%%$&1v3oonn1%&$%@@@$#%$@##@%$%@@$%$$@$%#@$$$$6aoon!n36&@##$#@@@@88&;ni#*
        8%$$@$@@$#@#$@$@$@@@@$$%@@@@%&$$@@@#$$$###@@&$$@%@@@#@@&$$@@@@@@@#!~$38#@&
       ;$$$@#@@$@@@&@@@$@@@@#$#$@@@8vi$@#@@@$&$#@@@@$@$$@#@@@@#@&$$@@@@@@@#8%%%8%#+
       $$%@@@@$@@@$@@#@@#@@8&#@#@@$vn-%@@@@$$83%@@@@@#@&$@@@@@@@@$$$@@@@@@&%%8i!aai;
       $$@@@@##@@&@@@1#@@&nv$v@@@%vv---$@@@8!$*n#@@@i@@#3&@@@@@@@@#$$@@@@@@8%86&;%$;~3
      .$$@@@@&@@@#@@vv@@vn1n%n$#6vv-----3#@vo%;!ou#@vv1@an%@@@@@@@@@$#@@@@@%%6!un8#6v-
      .$#@#o1@@@#@#vn#vn%888n^-v;v+------^$vi3 ~88%88#&v#*n#@@@@@@@@@@#@@@@i3%3$11&
       $@#  &@@~@%vni;!66666n----*-----------i66666668.o;+-$@@@$@8#@@@@@@@@~~o~&@@@
       %8   @83#@!n-*.!!!!!!*----------------oi!!!!!6. ^+-o^+o ui;#@@@@@@@@@@@#@@@@
            %6338u^^o+~a1vn;-----------------+-^^^^^+vuv+++3^*1!1zvv@@@@@@@@@@@@@@@
             8!!83;+o^++++----------------------++^+^^^z^^+$!!%%%zaz!@@@@@@@@@@@@@@
             %!38o++++++++-----------------------+++++++++-$!!8%%nvvv@@@@@@@@@@@@@@
             %!!8o-++++-------~.----------3----------+-----$!!8%$nnv6@@@@@@@@@@@@@&
             8136v-------------.#$iizzvzzz!.---------------%!!8%$nna@@@@@@@@@@@@@@$
           -ua-~%!---------------$ivzzzzzz6----------------8+va16o&@@@@@@@@@@@@@%@3
            *n#z!v----------------+izvzzz1^+-------------z v i^zi6@#@@@@@@@@@@@@^#v
              #&@@#------------------v!1+-----------------n## @$&#%$#@@@@@@i@@@@ #
              &$@@#$;-------------------------------------^#$$#@@%$#@#i@@@@*@@@! @
              &#@@z#&@;---------------------------------^z #%@@@@$%@@$ @&i@ $@@..;
              $@@6 %#-@@$;---------------------------.!^   &#@$8;$&@@ +@-n# !@i
              &@@  !i.$@@@1#$;.------------------.z8      -$@$ 3 @@@  ~~ ;n v&
             ;&&   6  ~@&  a    .oa!i11azu1i!a-           z#1    $@         ~
             z6        *                                  @.     -

## 输出样例

    #include<stdio.h>
    int main()
    {
        puts("          *11 i                                                                     ");
        puts("         ao   .%383i~+                                                     +.       ");
        puts("        .o~;n!i~-!3!!!!!!%!-   .a$&&$$$$$$$$$&$%1^                 +nu638$  ;       ");
        puts("          ~~i$63a!!!!!!!!!8#$$$$$$$$$$$$$$$$$$$$$$$$$@&;z$$3!i!3!!!!!!i-% i+ 1      ");
        puts("       v. .  %1a+!!!3!$&$%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%###$$%%863!3!z~oz36;i~+     ");
        puts("       .1;;8!z^z&&$%$$$$$$%$&$$$$$$$$$$$$$$$$$$$$$$$$$&&###@@@!!!!!!3!~*;z3!*  *    ");
        puts("       v3a$%&%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%#@@@@888%%88ini!8u;1     ");
        puts("      a~~;$$%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#@@@&%8%%%u!8$~~i      ");
        puts("       *8$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$&$$$$$$$%$@@@@&%%oa!%u;!.      ");
        puts("       $$$$$$$%#$$$$$$$$$&&%$$$$$$$$$$$$$$$$$%$$$$$$$$$@$$$$$$#$&ion%%%a3&^  ~u     ");
        puts("     .annnu%$@$$$&$$$$$$##%%$#&%&$$$@$$$$$$$&$$$$$$##$%#@&81nnnnnnz8@&3888z~3^      ");
        puts("     &%%$&1v3oonn1%&$%@@@$#%$@##@%$%@@$%$$@$%#@$$$$6aoon!n36&@##$#@@@@88&;ni#*      ");
        puts("    8%$$@$@@$#@#$@$@$@@@@$$%@@@@%&$$@@@#$$$###@@&$$@%@@@#@@&$$@@@@@@@#!~$38#@&      ");
        puts("   ;$$$@#@@$@@@&@@@$@@@@#$#$@@@8vi$@#@@@$&$#@@@@$@$$@#@@@@#@&$$@@@@@@@#8%%%8%#+     ");
        puts("   $$%@@@@$@@@$@@#@@#@@8&#@#@@$vn-%@@@@$$83%@@@@@#@&$@@@@@@@@$$$@@@@@@&%%8i!aai;    ");
        puts("   $$@@@@##@@&@@@1#@@&nv$v@@@%vv---$@@@8!$*n#@@@i@@#3&@@@@@@@@#$$@@@@@@8%86&;%$;~3  ");
        puts("  .$$@@@@&@@@#@@vv@@vn1n%n$#6vv-----3#@vo%;!ou#@vv1@an%@@@@@@@@@$#@@@@@%%6!un8#6v-  ");
        puts("  .$#@#o1@@@#@#vn#vn%888n^-v;v+------^$vi3 ~88%88#&v#*n#@@@@@@@@@@#@@@@i3%3$11&     ");
        puts("   $@#  &@@~@%vni;!66666n----*-----------i66666668.o;+-$@@@$@8#@@@@@@@@~~o~&@@@     ");
        puts("   %8   @83#@!n-*.!!!!!!*----------------oi!!!!!6. ^+-o^+o ui;#@@@@@@@@@@@#@@@@     ");
        puts("        %6338u^^o+~a1vn;-----------------+-^^^^^+vuv+++3^*1!1zvv@@@@@@@@@@@@@@@     ");
        puts("         8!!83;+o^++++----------------------++^+^^^z^^+$!!%%%zaz!@@@@@@@@@@@@@@     ");
        puts("         %!38o++++++++-----------------------+++++++++-$!!8%%nvvv@@@@@@@@@@@@@@     ");
        puts("         %!!8o-++++-------~.----------3----------+-----$!!8%$nnv6@@@@@@@@@@@@@&     ");
        puts("         8136v-------------.#$iizzvzzz!.---------------%!!8%$nna@@@@@@@@@@@@@@$     ");
        puts("       -ua-~%!---------------$ivzzzzzz6----------------8+va16o&@@@@@@@@@@@@@%@3     ");
        puts("        *n#z!v----------------+izvzzz1^+-------------z v i^zi6@#@@@@@@@@@@@@^#v     ");
        puts("          #&@@#------------------v!1+-----------------n## @$&#%$#@@@@@@i@@@@ #      ");
        puts("          &$@@#$;-------------------------------------^#$$#@@%$#@#i@@@@*@@@! @      ");
        puts("          &#@@z#&@;---------------------------------^z #%@@@@$%@@$ @&i@ $@@..;      ");
        puts("          $@@6 %#-@@$;---------------------------.!^   &#@$8;$&@@ +@-n# !@i         ");
        puts("          &@@  !i.$@@@1#$;.------------------.z8      -$@$ 3 @@@  ~~ ;n v&          ");
        puts("         ;&&   6  ~@&  a    .oa!i11azu1i!a-           z#1    $@         ~           ");
        puts("         z6        *                                  @.     -");
        return 0;
    }

## HINT

注意转义字符 `'` 、`"`、`\` 等的输出。

当你 `CE` 了，有可能是程序 $A$ 没有通过编译，也有可能是程序 $B$ 没有通过编译。
