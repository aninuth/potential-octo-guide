// optimized versions of matrix diagonal summing
#include "matvec.h"

int matsquare_VER1(matrix_t mat, matrix_t matsq) {
  for(int i=0; i<mat.rows; i++){
    for(int j=0; j<mat.cols; j++){
      MSET(matsq,i,j,0);
    }
  }

  for (int i =0; i<mat.rows; i++){
    for (int k = 0; k<mat.rows; k++){
      int lead = MGET(mat, i, k);
      int j;
      for (j = 0; j<mat.cols-2; j+=3){
        int cur1 = MGET(matsq, i, j);
        int cur2 = MGET(matsq, i, j+1);
        int cur3 = MGET(matsq, i, j+2);
        int new1 = MGET(mat, k, j);
        int new2 = MGET(mat, k, j+1);
        int new3 = MGET(mat, k, j+2);
        cur1 += lead * new1;
        cur2 += lead * new2;
        cur3 += lead * new3;
        MSET(matsq, i, j, cur1);
        MSET(matsq, i, j+1, cur2);
        MSET(matsq, i, j+2, cur3);
      }
      for (; j<mat.cols; j++){
        int cur = MGET(matsq, i, j);
        int new = MGET(mat, k, j);
        cur += lead * new;
        MSET(matsq, i, j, cur);
      }
    }
  }
  return 0;                                       // return success
}


int matsquare_OPTM(matrix_t mat, matrix_t matsq) {
  if(mat.rows != mat.cols ||                       // must be a square matrix to square it
     mat.rows != matsq.rows || mat.cols != matsq.cols)
  {
    printf("matsquare_OPTM: dimension mismatch\n");
    return 1;
  }


  // Call to some version of optimized code
  return matsquare_VER1(mat, matsq);
}
