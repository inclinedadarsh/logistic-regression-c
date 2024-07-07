#include "backward.h"
#include "matrix.h"

Grads backward_propagate(Matrix *a, Matrix *y, Matrix *X) {
  int m = X->cols;
  int n = X->rows;
  Matrix dw = create_matrix(n, 1);
  float db = 0.0f;

  Matrix dz = create_matrix(1, m);

  for (int i = 0; i < m; ++i) {
    dz.data[0][i] = a->data[0][i] - y->data[0][i];
  }

  for (int i = 0; i < n; i++) {
    dw.data[i][0] = 0.0f;
    for (int j = 0; j < m; j++) {
      dw.data[i][0] += X->data[i][j] * dz.data[0][j];
    }
    dw.data[i][0] /= m;
  }

  for (int i = 0; i < m; i++) {
    db += dz.data[0][i];
  }
  db /= m;

  Grads grads;
  grads.dw = dw;
  grads.db = db;

  free_matrix(&dz);
  return grads;
}

void free_grads(Grads *grads) { free_matrix(&grads->dw); }
