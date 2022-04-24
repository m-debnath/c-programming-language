#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
    int c, state;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            putchar('\n');
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
    
    return 0;
}
