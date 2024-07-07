#include "../include/cost.h"
#include "../include/matrix.h"
#include <math.h>

float logloss(float a, float y) {
  float loss = (-1) * (y * logf(a) + (1 - y) * logf(1 - a));
  return loss;
}

float compute_cost(Matrix *a, Matrix *y) {
  float cost = 0.0f;
  int m = a->cols;

  for (int i = 0; i < m; ++i) {
    cost += logloss(a->data[0][i], y->data[0][i]);
  }
  cost /= m;
  return cost;
}
