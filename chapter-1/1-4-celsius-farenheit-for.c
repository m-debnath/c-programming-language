#include <stdio.h>

int main(int argc, char const *argv[])
{
    float celsius;

    printf("%10s %10s\n", "Celsius", "Farenheit");

    for (celsius = 0; celsius <= 100; celsius = celsius + 10)
    {
        printf("%10.0f %10.0f\n", celsius, (((9.0 / 5.0) * celsius) + 32.0));
    }
    
    return 0;
}