#include<stdio.h>

int main(void)
{
    int c, nl , tab, blank;

    for (nl = 0, tab = 0, blank = 0; (c = getchar()) != EOF;)
    {
        if (c == '\n')
            ++nl;
            if (nl == 100)
                break;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++blank;
    }
    printf("Newlines: %d\nTabs: %d\nBlanks: %d\n", nl, tab,blank);
    return 0;
}