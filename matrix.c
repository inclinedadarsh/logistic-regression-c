#include "matrix.h"
#include <stdlib.h>

Matrix create_matrix(int rows, int cols) {
  Matrix matrix;
  matrix.rows = rows;
  matrix.cols = cols;

  matrix.data = (float **)malloc(rows * sizeof(float *));
  for (int i = 0; i < rows; i++) {
    matrix.data[i] = (float *)malloc(cols * sizeof(float));
  }

  return matrix;
}

void free_matrix(Matrix *matrix) {
  for (int i = 0; i < matrix->rows; ++i) {
    free(matrix->data[i]);
  }
  free(matrix->data);
}
