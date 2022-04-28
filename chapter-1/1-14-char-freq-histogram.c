#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nw, no;
    int ndigits[10], ncaps[26], nsmalls[26];

    nw = no = 0;
    for (int i = 0; i < 10; i++)
    {
        ndigits[i] = 0;
    }
    for (int i = 0; i < 26; i++)
    {
        ncaps[i] = 0;
        nsmalls[i] = 0;
    }
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            ++nw;
        else if (c >= '0' && c <= '9')
            ++ndigits[c-'0'];
        else if (c >= 'A' && c <= 'Z')
            ++ncaps[c-'A'];
        else if (c >= 'a' && c <= 'z')
            ++nsmalls[c-'a'];
        else
            ++no;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Frequency of %c: %d\n", i+'0', ndigits[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        printf("Frequency of %c: %d\n", i+'A', ncaps[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        printf("Frequency of %c: %d\n", i+'a', nsmalls[i]);
    }
    printf("Frequency of blanks: %d\n", nw);
    printf("Frequency of others: %d\n", no);

    return 0;
}
