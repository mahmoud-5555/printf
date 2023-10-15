#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} Vector;

void initVector(Vector *vec) {
    vec->data = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    if (vec->data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    vec->size = 0;
    vec->capacity = INITIAL_CAPACITY;
}

void pushBack(Vector *vec, int value) {
    if (vec->size == vec->capacity) {
        vec->capacity *= 2;
        vec->data = (int *)realloc(vec->data, vec->capacity * sizeof(int));
        if (vec->data == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
    }
    vec->data[vec->size] = value;
    vec->size++;
}

int at(Vector *vec, size_t index) {
    if (index < vec->size) {
        return vec->data[index];
    }
    fprintf(stderr, "Index out of range\n");
    exit(1);
}

void freeVector(Vector *vec) {
    free(vec->data);
    vec->size = 0;
    vec->capacity = 0;
}

int main() {
    Vector myVector;
    initVector(&myVector);

    for (int i = 0; i < 20; i++) {
        pushBack(&myVector, i);
    }

    for (int i = 0; i < myVector.size; i++) {
        printf("%d ", at(&myVector, i));
    }
    printf("\n");

    freeVector(&myVector);

    return 0;
}
