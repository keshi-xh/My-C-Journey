#include<stdio.h>

/*Print Fahrenheit-Celsius table for
fahr = 0,20, ....... ,300*/

/*void version_1(void);
void version_2(void);

int main()
{
    version_1();
    version_2();
}
void version_1()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; //lower limit of temperature scale
    upper = 300; //upper limit
    step = 20; //step size

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr , celsius);
        fahr = fahr + step ;
    }
    return;
}
void version_2()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lower limit of temperature scale
    upper = 300; //upper limit
    step = 20; //step size

    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step ;
    }
}*/
main()
{
    float fahr, celsius;
    float lower, upper, step;
     lower = 0; /* lower limit of temperature scale */
     upper = 300; /* upper limit */
     step = 20; /* step size */
    printf("Fahrenheit to Celsius Conversion Table\n");
    fahr = lower;
    while (fahr <= upper) {
         celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
}
}
