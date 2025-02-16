#include<stdio.h>
#define IN 1 // Inside the word 
#define OUT 0 // Outside the word
main()
{
    int c, state, wl;
    state = OUT;
    
    for ((c = getchar() !=EOF)
    {
        if(c == ' ' || c == '\t' || c== '\n')
        {
            state = IN;
            
        }
    }
}