#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10
#define SUCCESS 0
#define STACK_OVERFLOW -1
#define STACK_UNDERFLOW -2


int pop(int *value);

int push(int value);

int peek(int *value);

int stack_full();

int stack_empty();

#endif