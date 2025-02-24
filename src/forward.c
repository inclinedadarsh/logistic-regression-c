#include "../include/forward.h"
#include "../include/activation.h"
#include "../include/matrix.h"

Matrix forward_propagate(Params *params, Matrix *X) {
  int m = X->cols;
  int n = X->rows;
  Matrix a = create_matrix(1, m);

  for (int i = 0; i < m; ++i) {
    a.data[0][i] = 0.f;
    for (int j = 0; j < n; ++j) {
      a.data[0][i] += X->data[j][i] * params->w.data[j][0];
    }
    a.data[0][i] += params->b;
    a.data[0][i] = sigmoidf(a.data[0][i]);
  }

  return a;
}
