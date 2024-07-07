#include "../include/params.h"
#include "../include/matrix.h"
#include "../include/rand_float.h"
#include <stdio.h>
#include <stdlib.h>

Params initialize_params(int num_weights, int seed) {
  srand(seed);

  Params params;
  params.w = create_matrix(num_weights, 1);

  for (int i = 0; i < num_weights; i++) {
    params.w.data[i][0] = rand_float();
  }

  params.b = rand_float();

  return params;
}

void free_params(Params *params) { free_matrix(&params->w); }

void print_params(const Params *params) {
  printf("\nWeights:\t");
  for (int i = 0; i < params->w.rows; ++i) {
    printf("%f ", params->w.data[i][0]);
  }

  printf("\n   Bias:\t");
  printf("%f\n", params->b);
}
