#include<stdio.h>

/* print Farenheit-Celcius table
    for fahr = 0, 20, ..., 300 */

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    // print heading
    printf("%10s %10s\n", "Farenheit", "Celsius");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%10.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}
