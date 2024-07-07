#ifndef COST
#define COST

#include "matrix.h"

float logloss(float a, float y);
float compute_cost(Matrix *a, Matrix *y);

#endif // COST
