#include "ui.h"
#include <stdio.h>
void printHelp(){
  printf("Uso de la calculadora de matrices\n");
  printf("Para hacer una operacion ejecute ./calc_matrices matriz1 operacion matriz2\n");
  printf("Las operaciones disponibles son +,-,*, d y t\n");
  printf("La estructura de las matrices debe de ser la siguiente 1,2,3;1,2,3;\n");
}


void printErrorInput(){
  printf("Solamente puede ingresar 2 matrices y una de las operaciones\n");
  printf("Las operaciones disponibles son las siguiente +, -,*, d y t\n");
}


