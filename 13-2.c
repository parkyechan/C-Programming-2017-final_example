#include<cstdio>
#define ROWS 3
#define COLS 3
int printMatrix(int mat[][COLS]){
  int r, c;
  for(r = 0; r < ROWS; r++){
    for(c = 0; c< COLS; c++)
      printf("%5d", mat[r][c]);
    printf("\n");
  }
}

void inputMatrix(int mat[][COLS]){
  int r, c;
  for(r = 0; r< ROWS; r++){
    scanf("%d %d %d", &mat[r][0], &mat[r][1], &mat[r][2]);
  }
}

void multiMatrices(int matA[][COLS], int matB[][COLS], int matC[][COLS]){
  int r, c, i;
  for(r = 0; r < ROWS; r++){
    for(c=0; c<COLS; c++)
      for(i=0; i<ROWS; i++)
        matC[r][c] += matA[r][i] * matB[i][c];
  }
}

int main(){
  int matrixA[ROWS][COLS] = {0,};
  int matrixB[ROWS][COLS] = {0,};
  int matrixC[ROWS][COLS] = {0,};

  inputMatrix(matrixA);
  inputMatrix(matrixB);

  multiMatrices(matrixA, matrixB, matrixC);
  printMatrix(matrixC);
  
}
