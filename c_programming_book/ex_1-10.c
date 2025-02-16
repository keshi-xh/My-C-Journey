#include<stdio.h>

int main(void)
{
    #define BACKSLASH '\\'
    #define TAB '\t'
    #define BACKSPACE '\b'
    int c;
    for((c= getchar()) !=EOF)
        if (c == BACKSLASH)
            putchar("\\");
        if (c == TAB)
            putchar("\t");
        if (c == BACKSPACE)
            putchar("\b");
        if (c != BACKSLASH)
            if (c !=TAB)
                if (c != BACKSPACE)
                    putchar(c);
}