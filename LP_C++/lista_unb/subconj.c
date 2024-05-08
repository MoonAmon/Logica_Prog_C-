//
// Created by USER on 07/05/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int size;
    bool pass = true;

    scanf("%d", &size);

    int* array_original = (int*)malloc(size * sizeof(int));
    int* array_comp = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &array_original[i]);
    }

    for (int i = 0; i < size; i++) {
        scanf("%d", &array_comp[i]);
    }

    for (int i = 0; i < size; i++) {
        if (array_original[i] != array_comp[i])
            pass = false;
    }

    if (pass == true) {
        printf("sim");
        return 0;
    }
    else {
        printf("nao");
        return 0;
    }


}
