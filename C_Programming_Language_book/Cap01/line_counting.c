#include <stdio.h>

// Count lines in input
int main(int argc, char const *argv[])
{
    int char_input, n_lines;

    n_lines = 0;
    while ((char_input = getchar()) != EOF)
        if (char_input == '\n')
            ++n_lines;
    printf("%d\n", n_lines);

    return 0;
}
