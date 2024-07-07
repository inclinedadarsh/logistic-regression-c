#include "../dataset/gates.h"
#include "../include/forward.h"
#include "../include/matrix.h"
#include "../include/neuron.h"
#include "../include/params.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // Defining the data: AND Gate
  Dataset and_gate = create_and_gate_dataset();

  // Training the neuron
  Params params = neuron(&and_gate.X,
                         &and_gate.y,
                         1e-2,
                         40000,
                         true, 96);

  // Checking the results
  Matrix a = forward_propagate(&params, &and_gate.X);
  printf("\nWeights are:\n");
  print_matrix(&a);

  // Freeing the memory
  free_matrix(&and_gate.X);
  free_matrix(&and_gate.y);
  free_matrix(&a);
  free_params(&params);

  return 0;
}
