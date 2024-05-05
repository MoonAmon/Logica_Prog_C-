//
// Created by USER on 04/05/2024.
//
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int character;

    character = getchar();
    while (character != EOF)
    {
        putchar(character);
        character = getchar();
    }
    
    return 0;
}

