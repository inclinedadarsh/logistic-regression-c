#include "../include/forward.h"
#include "../include/matrix.h"
#include "../include/neuron.h"
#include "../include/params.h"
#include <stdbool.h>

int main(void) {
  // Defining the data
  Matrix X = create_matrix(2, 4);
  Matrix y = create_matrix(1, 4);

  X.data[0][0] = 0;
  X.data[1][0] = 0;
  X.data[0][1] = 0;
  X.data[1][1] = 1;
  X.data[0][2] = 1;
  X.data[1][2] = 0;
  X.data[0][3] = 1;
  X.data[1][3] = 1;

  y.data[0][0] = 0;
  y.data[0][1] = 0;
  y.data[0][2] = 0;
  y.data[0][3] = 1;

  // Training the neuron
  Params params = neuron(&X, &y, 1e-3, 40000, true, 42);

  // Checking the results
  Matrix a = forward_propagate(&params, &X);
  print_matrix(&a);

  // Freeing the memory
  free_matrix(&X);
  free_matrix(&y);
  free_matrix(&a);
  free_params(&params);

  return 0;
}
