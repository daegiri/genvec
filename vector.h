#pragma once

#include <stddef.h>

typedef struct vector {
    void *data;          // Pointer to the data

    size_t size;         // Number of elements in the vector
    size_t capacity;     // Number of elements the vector can hold
    size_t element_size; // Size of each element in bytes
} vector;

#define DEFAULT_CAPACITY 10

vector* vector_create_with(size_t capacity, size_t element_size);
vector* vector_create(size_t element_size);
void vector_destroy(vector* vec);
void vector_push(vector *v, const void *value);