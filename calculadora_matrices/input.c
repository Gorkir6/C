#include "input.h"
#include "utils.h"
#include "string.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
int checkMatrix(char *matrix){
  char* copy = strdup(matrix);
  char* row = strtok(copy,";");
  int expectedColumns = 0;


  while(row){
    int colCount =0;
    char*  number = strtok(row, ",");
    while(number){
      if(atoi(number)==0 && strcmp(number, "0")!=0){
        free(copy);
        return 0;
      }
      colCount++;
      number = strtok(number,NULL);
    }
    if(expectedColumns ==0){
      expectedColumns = colCount;
    }else if(expectedColumns != colCount){
      free(copy);
      return 0;
    }
    row = strtok(NULL,";");
  }
  free(copy);
  return expectedColumns;
}

int** convertToMatrix(char* input, int* numRows, int* numCols){
  char* copy = strdup(input);
  int rows = 0;
  int cols = *numCols+1;

  for (int i =0; copy[i]; i++){
    if(copy[i] == ';'){
      rows++;
    }
  }
  rows++;

  *numRows = rows;
  *numCols = cols;
  char* row = strtok(copy, ";");
  int** matrix = (int**)malloc(rows*sizeof(int*));
  for (int i=0; i<rows;i++){
    matrix[i]= malloc(cols*sizeof(int));

  }

  for (int i =0; i<rows;i++){
    for (int j=0; j<cols;j++){
      char* number = strtok(row,",");
      matrix[i][j] = atoi(number);
      row = NULL;
    }
    row = strtok(NULL,";");
  }
  free(copy);
  return matrix;
}

