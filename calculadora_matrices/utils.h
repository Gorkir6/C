#ifndef UTILS_H
#define UTILS_H

typedef struct Stack{
  char* data;
  int top;
  int capacity;
}Stack;


//functions

Stack* createStack(int capacity);
void push(Stack* stack, char c);
char pop(Stack* stack);

#endif

