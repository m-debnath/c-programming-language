#include <stdio.h>

#define BLANK ' '

int main(int argc, char const *argv[])
{
    int c;
    int prev_c;

    while ((c = getchar()) != EOF)
    {
        if (prev_c == BLANK && c == BLANK)
            ;
        else
            putchar(c);
        
        prev_c = c;
    }
    
    return 0;
}
