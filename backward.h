#ifndef BACKWARD
#define BACKWARD

#include "matrix.h"

typedef struct {
  Matrix dw;
  float db;
} Grads;

Grads backward_propagate(Matrix *a, Matrix *y, Matrix *X);

#endif // BACKWARD
