#include <stdio.h>
#include <stdlib.h>

#include "genvec.h"

int main(int argc, char **argv) {
    int *vec_test = vector_create(int, 2);
    printf("vector is empty: %s\n", vector_empty(vec_test) ? "true" : "false");

    printf("size: %lu\n", vector_size(vec_test));
    printf("capacity: %lu\n", vector_capacity(vec_test));

    for (int i = 0; i < 10; i++) {
        vector_push_back(vec_test, i);
    }
    
    printf("vector is empty: %s\n", vector_empty(vec_test) ? "true" : "false");

    printf("size: %lu\n", vector_size(vec_test));
    printf("capacity: %lu\n", vector_capacity(vec_test));

    vector_destroy(vec_test);

    return 0;
}



