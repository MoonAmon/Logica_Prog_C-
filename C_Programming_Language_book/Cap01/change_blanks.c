#include <stdio.h>

int main(int argc, char const *argv[])
{
    int char_input, last_char;

    last_char = EOF;

    while ((char_input = getchar()) != EOF){
        if (char_input != ' ' || last_char != ' ')
            putchar(char_input);
        last_char = char_input;
    }
    

    return 0;
}
