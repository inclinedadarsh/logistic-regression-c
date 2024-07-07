#ifndef NEURON
#define NEURON

#include "matrix.h"
#include "params.h"
#include <stdbool.h>

Params neuron(Matrix *X, Matrix *y, float learning_rate, int epochs,
              bool verbose, int seed);

#endif // NEURON
