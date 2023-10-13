#include "ui.h"
#include <string.h>
#include "input.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct Matrix{
  int** matrix;
  int rows;
  int columns;
} Matrix;

int main(int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "-h")==0){
    printHelp();
    return 0;
  }else if (argc == 4){
    //Here we have the matrix of the user into a string, now we have to check if the string is correct it has to be like ((1,3,4),(1,3,4)); and then transform that into a matrix.
    char* matriz1 = argv[1];
    int checkMatriz1 = checkMatrix(matriz1);
    if(checkMatriz1!=0){
      Matrix* matriz1_s = (Matrix*)malloc(sizeof(Matrix));
       matriz1_s->matrix = convertToMatrix(matriz1,&matriz1_s->rows, &matriz1_s->columns);
    }else{
      printErrorInput();
      return 1;
    }
    char* operacion = argv[2];//Here we have to check that the input is a valid option. + - * d and t
    char* matriz2 = argv[3];

  }else if (argc == 3){
    //Here we also have to check the matrix of the user.
    char* matriz1 = argv[1];
    char* operacion = argv[2];//check valid option
  }else{
    printErrorInput();
    return 1;
  }
  return 0;
}
