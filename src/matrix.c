#include "../include/matrix.h"
#include <stdio.h>
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

void print_matrix(Matrix *matrix) {
  printf("\n");
  for (int i = 0; i < matrix->rows; ++i) {
    for (int j = 0; j < matrix->cols; ++j) {
      printf("%f ", matrix->data[i][j]);
    }
    printf("\n");
  }
}
