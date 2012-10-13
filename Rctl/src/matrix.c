#include "matrix.h"

double** newdmatrix(size_t rows, size_t cols){
  size_t i;
  double** m = (double**) calloc(rows, sizeof(double*));
  if(m==NULL){
    printf("Not enough memory for new double matrix\n");
    exit(-1);
  }
  for(i = 0; i<rows; i++) {
    m[i]= newdvector(cols);
  }
  return m;
}

int** newimatrix(size_t rows, size_t cols){
  size_t x;
  int** m = (int**) calloc(rows, sizeof(int*));
  if(m==NULL){
    printf("Not enough memory for new int matrix\n");
    exit(-1);
  }
  for(x = 0; x<rows; x++) {
    m[x]= newivector(cols);
  }
  return m;
}

double** addtodmatrix(double** matrix, size_t size, size_t cols, double* n){
  double** m = newdmatrix(size+1, cols);
  size_t i;
  for(i = 0;i < size;i++){
    m[i] = matrix[i];
  }
  m[size] = n;
  return m;
}

int** addtoimatrix(int** matrix, size_t size, size_t cols, int* n){
  int** m = newimatrix(size+1, cols);
  size_t i;
  for(i = 0;i < size;i++){
    m[i] = matrix[i];
  }
  m[size] = n;
  return m;
}

void printdmatrix(double** m, size_t rows, size_t cols){
  size_t r,c;
  for(r = 0; r < rows; r++){
    for(c = 0; c < cols; c++){
      if(c > 0) printf("\t");
      printf("%f",m[r][c]);
    }
    printf("\n");
  }
}

void printimatrix(int** m, size_t rows, size_t cols){
  size_t r,c;
  for(r = 0; r < rows; r++){
    for(c = 0; c < cols; c++){
      if(c > 0) printf("\t");
      printf("%d",m[r][c]);
    }
    printf("\n");
  }
}

double matrixmax(double** m, size_t rows, size_t cols){
  size_t r,c;
  double max = -DBL_MAX;
  for(r = 0; r < rows; r++){
    for(c = 0; c < cols; c++){
      if(m[r][c] > max) max = m[r][c];
    }
  }
  return max;
}

void freematrix(void** m, size_t rows){
  size_t i;
  for(i = 0; i < rows; i++){
    free(m[i]);
  }
  free(m);
}