#include<stdio.h>
/* Write a program to print a histogram of the frequencies of different characters
in its input*/

int main()
{
    int c, i, state, k, MAXHIST;
    MAXHIST = 15;
    int character_list[94] = {0};
    
    while ((c = getchar()) != EOF)
    {
        if(c != ' ' && c != '\t' && c != '\n')
        {
            if (character_list[c-33] < MAXHIST) 
            {++character_list[c-33];}
        } 
    }
    for (i = 15; i > 0; --i)
    {
        for (int j = 0; j < 94; ++j)
            {
                if (character_list[j] >= i)
                    {
                        putchar(' ');
                        putchar('*');
                    }
                else
                    {
                        putchar(' ');
                        putchar(' ');
                    }
            }
        putchar('\n');
    }
    for (int j = 0; j < 94; ++j)
    {
        putchar('_');
        putchar('_');
    }
    putchar('\n');
    for (int j = 0; j < 94; ++j)
    {
        k =j + 33;
        putchar(k);
        putchar(' ');
    }
    return 0;
}