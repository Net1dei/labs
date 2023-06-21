#ifndef UNTITLED5_VECTOR_H
#define UNTITLED5_VECTOR_H

#include "stdbool.h"

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} vector;

vector createVector(size_t n);

void reserve(vector *v, size_t newCapacity);

void clear(vector *v);

void shrinkToFit(vector *v);

void deleteVector(vector *v);

int getVectorValue(vector *v, size_t i);

void pushBack(vector *v, int x);

void popBack(vector *v);

void test_pushBack_emptyVector();

void test_pushBack_fullVector();

void test_popBack_notEmptyVector();

#endif
