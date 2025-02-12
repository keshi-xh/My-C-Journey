//Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
//Exercise 1-7. Write a program to print the value of EOF.
#include <stdio.h>

int main()
{
    int c;
    printf("%d\n",((c = getchar()) != EOF));
    printf("%3d\n", EOF);
    return 0;
}