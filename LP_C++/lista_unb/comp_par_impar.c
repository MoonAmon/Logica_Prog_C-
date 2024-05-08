//
// Created by USER on 07/05/2024.
//

#include <stdio.h>
#include <stdlib.h>

void read_array(int* array, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void print_array(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size, cont_par = 0, cont_impar = 0, number_comp = 0;

    scanf("%d", &size);

    int* array_par = (int*)malloc(size * sizeof(int));
    int* array_impar = (int*)malloc(size * sizeof(int));

    read_array(array_par, size);

    for (int i = 0; i < size; i++) {
        number_comp = array_par[i];

        if (number_comp % 2 == 0 || number_comp < 0) {
            array_par[cont_par] = number_comp;
            cont_par++;
        }
        else {
            array_impar[cont_impar] = number_comp;
            cont_impar++;
        }


    }

    print_array(array_par, cont_par);
    print_array(array_impar,  cont_impar);


    return 0;

}
