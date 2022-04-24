#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case TAB:
            putchar('\\');
            putchar('t');
            break;
        case BACKSPACE:
            putchar('\\');
            putchar('b');
            break;
        case BACKSLASH:
            putchar('\\');
            putchar('\\');
            break;
        
        default:
            putchar(c);
        }
    }
    return 0;
}
