#include "stack.h"



int stack[STACK_SIZE];
int count = 0;

int peek(int *value){
    if (stack_empty()) {
        return STACK_UNDERFLOW;    
    }
    *value = stack[count - 1];
    return SUCCESS;

}

int push(int value){
    if(stack_full()){
        return STACK_OVERFLOW;
    }
    stack[count] = value;
    count++;
    return SUCCESS;    
}

int pop(int *value){
    if (stack_empty()) {
        return STACK_UNDERFLOW;    
    }
    count --;
    *value = stack[count];
    return SUCCESS;

    
}

int stack_full(){
    return count >= STACK_SIZE-1;
}

int stack_empty(){
    return STACK_SIZE == 0;
}
