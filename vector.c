#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <memory.h>

#include "vector.h"

vector* vector_create_with(size_t capacity, size_t element_size) {
    vector *vec = malloc(sizeof(vector));
    vec->data = malloc(capacity * element_size);

    vec->element_size = element_size;
    vec->capacity = capacity;
    vec->size = 0;

    return vec;
}


vector* vector_create(size_t element_size) {
    vector *vec = malloc(sizeof(vector));
    vec->data = malloc(DEFAULT_CAPACITY * element_size);

    vec->element_size = element_size;
    vec->capacity = DEFAULT_CAPACITY;
    vec->size = 0;

    return vec;
}

void vector_destroy(vector* vec) {
    free(vec->data); vec->data = NULL;
    free(vec); vec = NULL;
}

void vector_push(vector *v, const void *value) {
    if (v->size == v->capacity) {
        v->capacity *= 2;
        v->data = realloc(v->data, v->capacity * v->element_size);
    }
    memcpy((char*)v->data + v->size * v->element_size, value, v->element_size);
    v->size++;
}