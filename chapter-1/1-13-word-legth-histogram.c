#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
    int c, state, length = 0;
    int nwords[10];

    for (size_t i = 0; i < 10; i++)
    {
        nwords[i] = 0;
    }
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                if (length > 9)
                    ++nwords[9];
                else
                    ++nwords[length-1];
                length = 0;
            }
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++length;
        }
        else
            ++length;
    }
    
    for (size_t i = 0; i < 9; i++)
    {
        printf("Count of word with %ld characters: %d\n", i+1, nwords[i]);
    }
    printf("Count of word with >9 characters: %d\n", nwords[9]);

    return 0;
}
