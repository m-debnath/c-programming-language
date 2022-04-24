#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case ' ':
            ++nb;
            break;
        case '\t':
            ++nt;
            break;
        case '\n':
            ++nl;
            break;
        default:
            break;
        }
        
    }
    printf("Blanks: %d\n", nb);
    printf("Tabs: %d\n", nt);
    printf("Newlines: %d\n", nl);

    return 0;
}
