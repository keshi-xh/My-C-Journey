#include <stdio.h>
 #define IN 1 /* inside a word */
 #define OUT 0 /* outside a word */
 /* count lines, words, and characters in input */
/*main()
{
int c, nl, nw, nc, state;
state = OUT;
nl = nw = nc = 0;
while ((c = getchar()) != EOF) {
++nc;
if (c == '\n')
++nl;
if (c == ' ' || c == '\n' || c = '\t')
state = OUT;
else if (state == OUT) {
state = IN;
++nw;
}
}
printf("%d %d %d\n", nl, nw, nc);
}*/
/*(1-11)How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any?*/

//Testing boundaries is the best method 
// 1st no input
// one character word
//blanks only 
// and like wise

/*(1-12)*/
/*Write a program that prints its input one word per line.*/
main()
{
    int c , state;
    state = IN;

    while ((c =getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
            {
                if (state == IN)
                {
                    state = OUT;
                    putchar('\n');
                }
            }
        else if (state == OUT) 
        {
            putchar(c);
            state = IN;
        } else 
        {
            putchar(c);
        }
    }
}