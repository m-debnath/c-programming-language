#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
    int fahr;

    printf("%10s %10s\n", "Farenheit", "Celsius");

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%10d %10.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32.0)));
    }
    
    return 0;
}