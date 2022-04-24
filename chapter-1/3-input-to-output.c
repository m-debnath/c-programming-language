#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    printf("%d\n", (getchar() != EOF));
    printf("%d\n", (getchar() == EOF));
    printf("%d\n", EOF);
    
    return 0;
}
