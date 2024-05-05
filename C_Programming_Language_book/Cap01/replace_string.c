#include <stdio.h>

int main(int argc, char const *argv[])
{
    int char_input, last_char;

    while ((char_input = getchar()) != EOF)
    {
        if (char_input == '\t')
            printf("\\t");
        else if (char_input == '\b')
            printf("\\b");
        else if (char_input == '\\')
            printf("\\\\");
        else
            putchar(char_input);
    }
    
    return 0;
}
