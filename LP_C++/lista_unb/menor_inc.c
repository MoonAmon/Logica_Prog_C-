//
// Created by USER on 07/05/2024.
//

#include <stdio.h>
#include <stdlib.h>

void main() {
    int size, menor = 0;

    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++) {
        if (array[menor] > array[i])
            menor = i;
    }

    printf("%d\n", menor);


}
