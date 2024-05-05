#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n_blanks, n_newline, n_tabs, char_input;

    while ((char_input = getchar()) != EOF)

        if (char_input == ' ')
            n_blanks++;
        else if (char_input == '\t')
            n_tabs++;
        else if (char_input == '\n')
            n_newline++;
    

    printf("Number of blanks: %d\n Number of tabs: %d\n Number of newlines: %d\n", n_blanks, n_tabs, n_newline);

    return 0;
}
