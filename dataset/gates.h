#ifndef GATES
#define GATES

#include "../include/matrix.h"

typedef struct {
  Matrix X;
  Matrix y;
} Dataset;

Dataset create_and_gate_dataset() {
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

  Dataset dataset = {X, y};
  return dataset;
}

Dataset create_or_gate_dataset() {
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
  y.data[0][1] = 1;
  y.data[0][2] = 1;
  y.data[0][3] = 1;

  Dataset dataset = {X, y};
  return dataset;
}

Dataset create_nand_gate_dataset() {
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

  y.data[0][0] = 1;
  y.data[0][1] = 1;
  y.data[0][2] = 1;
  y.data[0][3] = 0;

  Dataset dataset = {X, y};
  return dataset;
}

#endif // GATES
