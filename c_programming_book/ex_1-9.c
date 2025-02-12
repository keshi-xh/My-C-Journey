#include<stdio.h>

int main(void)
{
    int c, sc;
    
    for (sc = 0; (c = getchar()) != EOF;)
        if (c == ' ')
            sc = ' ';
        if (sc == ' ' && c != ' ')
            putchar(' ');
        if (c != ' ')
            putchar(c);
    return 0;
}