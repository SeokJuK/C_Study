#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 

typedef int element;
element top = -1;
element stack[MAX_STACK_SIZE];

void push(element item){
    if(top>=MAX_STACK_SIZE){
        printf("Stack is Full!\n");
        return;
    }
    else {
        stack[++top] = item;
    }
}

element pop(){
    if(top == -1){
        printf("Stack is Empty");
        return 0;
        }
    else{
        return stack[top--];
    }
}

void del(){
    if(top == -1){
        printf("Stack is Empty");
            return;
    }
    else{
        top--;
    }
}

element peek(){
    if(top == -1){
        printf("Stack is Empty");
            return 0;
    }
    else{
        return stack[top];
    }
}

void printStack(){
    for(int i=0; i<=top; i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

void main(){
    int item;

    push(1);
    printStack();
    push(2);
    printStack();
    push(3);
    printStack();

    item = pop();
    printStack();
    printf("\t pop top => %d", item);
}