#include<stdio.h>
/* program to copy its input to its output, replacing each string of one or
more blanks by a single blank*/
int main(void)
{
    int c, last_c; //c is character , lastc is character before
    
    for (last_c = 0; (c = getchar()) != EOF;)
        if (c == ' ')
            last_c = ' ';
        if (last_c == ' ' && c != ' ')
            putchar(' ');
        if (c != ' ')
            putchar(c);
    return 0;
}