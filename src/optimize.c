#include "../include/optimize.h"
#include "../include/backward.h"
#include "../include/params.h"

void optimize(Params *params, Grads *grads, float lr) {
  int n = params->w.rows;

  for (int i = 0; i < n; i++) {
    params->w.data[i][0] = params->w.data[i][0] - lr * grads->dw.data[i][0];
  }

  params->b = params->b - lr * grads->db;
}
