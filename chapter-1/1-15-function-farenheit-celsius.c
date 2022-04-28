#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float f_to_c(float f);

float f_to_c(float f)
{
    return (5.0 / 9.0) * (f-32.0);
}

int main(int argc, char const *argv[])
{
    printf("%10s %10s\n", "Farenheit", "Celsius");
    for (float i = LOWER; i <= UPPER; i = i + STEP)
    {
        printf("%10.0f %10.1f\n", i, f_to_c(i));
    }
    
    return 0;
}
