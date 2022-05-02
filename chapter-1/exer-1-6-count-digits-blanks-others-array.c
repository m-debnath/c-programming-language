#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nwhites, nothers;
    int ndigits[10];

    nwhites = nothers = 0;
    for (size_t i = 0; i < 10; i++)
    {
        ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigits[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhites;
        else
            ++nothers;
    }
    
    printf("Digits:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%ld: %d\n", i, ndigits[i]);
    }
    printf("\nBlanks: %d\n", nwhites);
    printf("Others: %d\n", nothers);
    return 0;
}
