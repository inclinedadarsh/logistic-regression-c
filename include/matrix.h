#ifndef MATRIX
#define MATRIX

typedef struct {
  float **data;
  int rows;
  int cols;
} Matrix;

Matrix create_matrix(int rows, int cols);

void free_matrix(Matrix *matrix);

void print_matrix(Matrix *matrix);

#endif // MATRIX
