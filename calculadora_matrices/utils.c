#include "utils.h"
#include <stdlib.h>

Stack* createStack(int capacity){
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  stack->data = (char*)malloc(capacity*sizeof(char));
  stack->top = -1;
  stack->capacity = capacity;
  return stack;
}


void push(Stack *stack, char c){
  if(stack->top == stack->capacity-1) return;
  stack->data[++stack->top]=c;
}

char pop(Stack *stack){
  if(stack->top == -1)return '\0';
  return stack->data[stack->top--];
}

