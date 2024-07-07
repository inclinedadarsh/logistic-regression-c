#include "../include/neuron.h"
#include "../include/backward.h"
#include "../include/cost.h"
#include "../include/forward.h"
#include "../include/matrix.h"
#include "../include/optimize.h"
#include "../include/params.h"
#include <stdbool.h>
#include <stdio.h>

Params neuron(Matrix *X, Matrix *y, float learning_rate, int epochs,
              bool verbose, int seed) {
  Params params = initialize_params(X->rows, seed);

  for (int i = 0; i < epochs; ++i) {
    Matrix a = forward_propagate(&params, X);

    float cost = compute_cost(&a, y);

    Grads grads = backward_propagate(&a, y, X);

    optimize(&params, &grads, learning_rate);

    if (verbose) {
      printf("Epoch %d: Cost = %f\n", i, cost);
    }

    free_grads(&grads);
    free_matrix(&a);
  }

  printf("Training complete!");
  return params;
}
