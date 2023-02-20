#include <stdio.h>

#include "vector.h"

int main() {
    vector *v = vector_create(sizeof(int));
    for (int i = 0; i < 100; i++) {
        vector_push(v, &i);
        printf("%d %d\n", v->capacity, v->size);
    }
    for (int i = 0; i < 100; i++) {
        printf("%d ", ((int*)v->data)[i]);
    }
}