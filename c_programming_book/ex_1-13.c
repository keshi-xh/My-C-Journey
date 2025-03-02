#include<stdio.h>
/* Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging*/
#define IN 1 // Inside the word 
#define OUT 0 // Outside the word
int main()
{
    /* The line `int c, i, state, wl, MAXWORD ,MAXHIST;` is declaring multiple integer variables in a
    single line. Here's what each variable represents: */
    int c, i, state, wl, MAXWORD ,MAXHIST ;
    state = IN;
    MAXHIST = 15; // maximum number of counts
    MAXWORD = 10; // maximum number of letters in a word 
    wl = 0;
    int word_length[10];
    for (i = 0; i < 10; ++i) // assigning values to the array elements 
        word_length[i] = 0;
    
    while ((c = getchar()) != EOF) // loop to check each letter
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN) // End of word
            {
            state = OUT; // beginning the outside of word
            if (wl !=0 && wl < MAXWORD)
                {
                    if (word_length[wl-1] <= MAXHIST)
                        {
                            ++word_length[wl-1];
                        }
                }
            wl = 0;
            }
        }
        else 
        {
            if (state == OUT) // End of outside of the word
            {
                state = IN; // Beginning of inside of the word
            }
                if (wl < MAXWORD)
            {
                ++wl;
            }
        }
    }
    for (i = 15; i > 0; --i)
    {
        for (int j = 0; j < 10; ++j)
            {
                if (word_length[j] >= i)
                    {
                        putchar('*');
                    }
                else
                    {
                        putchar(' ');
                    }
            }
        putchar('\n');
    }
    for (int j = 0; j < 10; ++j)
    {
        putchar("_");
    }
    putchar('\n');
    for (int j = 0; j < 10; ++j)
    {
        putchar(word_length[j-0]);
    }
    return 0;
}