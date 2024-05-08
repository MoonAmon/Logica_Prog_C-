#include <stdio.h>
#include <stdlib.h>
//
// Created by USER on 07/05/2024.
//
int main () {
    int size, number_search;

    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    scanf("%d", &number_search);

    for (int i = 0; i < size; i++) {
        if (array[i] == number_search){
            printf("pertence");
            return 0;
        }
    }

    printf("nao pertence");
    return 0;
}