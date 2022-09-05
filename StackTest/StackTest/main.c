//
//  main.c
//  StackTest
//
//  Created by Y3SUNG on 2022/09/05.
//

#include <stdio.h>
#define STACK_SIZE 5
int stack[STACK_SIZE] = {0,};
int top = -1;

void PUSH(int value) {
    if(top >= STACK_SIZE-1) {
        printf("stack overflow\n");
    } else {
        stack[++top] = value;
    }
}
int POP() {
    if(top == -1) {
        printf("stack underflow\n");
        return 0;
    } else {
        printf("POP => %d\n", stack[top]);
        top--;
    }
    return 0;
}
int PEEK() {
    if(top == -1){
        printf("stack unberflow\n");
        return 0;
    }
    else return stack[top];
}

void PRINT() {
    for(int i = top; i >= 0; i--) {
        printf("stack[%d] = %d\n", i, stack[i]);
    }
}

int main() {
    PUSH(1); PUSH(2); PUSH(3);
    POP();
    PEEK();
    PUSH(4);
    PRINT();
    
    return 0;
}
