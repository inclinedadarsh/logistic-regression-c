#ifndef PARAMS
#define PARAMS

#include "matrix.h"

typedef struct {
  Matrix w;
  float b;
} Params;

Params initialize_params(int num_weights, int seed);

void free_params(Params *params);

void print_params(const Params *params);

#endif // PARAMS
