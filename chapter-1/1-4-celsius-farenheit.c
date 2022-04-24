#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 200;
    step = 20;

    printf("%10s %10s\n", "Celsius", "Farenheit");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%10.0f %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}