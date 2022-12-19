#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#define MAX_STACK_SIZE 100

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element item){
    if(top>=MAX_STACK_SIZE){
        printf("\n\n Stack is Full!!\n");
        return;
    }
    else stack[++top]=item;
}

element pop(){
    if(top==-1){
        printf("\n\n Stack if Empty!\n");
        return 0;
    }
    else return stack[top--];
=======
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
>>>>>>> 381dfebe16a3a4dd1b678cdc2f1f49a69393ddb0
}

void del(){
    if(top == -1){
<<<<<<< HEAD
        printf("\n\n Stack if Empty!\n");
        return 0;
    }
    else top--;
=======
        printf("Stack is Empty");
            return;
    }
    else{
        top--;
    }
>>>>>>> 381dfebe16a3a4dd1b678cdc2f1f49a69393ddb0
}

element peek(){
    if(top == -1){
<<<<<<< HEAD
        printf("\n\n Stack if Empty!\n");
        exit(0);
    }
    else return stack[top];
}

void printStack(){
    int i;
    printf("\n Stack[ ");
    for(i=0; i<=top; i++){
        printf("%d ", stack[i]);
    
    }
    printf("]");
=======
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
>>>>>>> 381dfebe16a3a4dd1b678cdc2f1f49a69393ddb0
}

void main(){
    int item;
<<<<<<< HEAD
    printStack();
=======

>>>>>>> 381dfebe16a3a4dd1b678cdc2f1f49a69393ddb0
    push(1);
    printStack();
    push(2);
    printStack();
    push(3);
    printStack();

<<<<<<< HEAD
    item = peek();
    printStack();
    printf(" peek top => %d", item);

    del();
    printStack();

    item = pop();
    printStack();
    printf("\t pop top => %d", item);

    item = pop();
    printStack();
    printf("\t pop top => %d", item);

    pop();

=======
    item = pop();
    printStack();
    printf("\t pop top => %d", item);
>>>>>>> 381dfebe16a3a4dd1b678cdc2f1f49a69393ddb0
}