#include<stdio.h>

/*Print Celsius to Fahrenheit*/
main()
{
    printf("Celsius to Fahrenheit Conversion Table\n");
    float celsius, fahr;
    float lower, upper, step;

    lower = -100; //Lower limit of the temperature scale
    upper = 100; // upper limit of the temperature scale
    step = 20; // step size

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}