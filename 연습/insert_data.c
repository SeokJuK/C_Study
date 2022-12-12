#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct StackType {
    int arr[100]; //int형 data 100개만 들어간다
    int top;
}StackType;

void init(StackType *s){
    s ->top = -1; //배열은 index가 0부터 시작
}

//empty : return 1
//!empty : return 0
int is_empty(StackType *s){
    if(s->top == -1)
    return 1;
return 0;
}

//full : return 1
//!full : return 0

int is_full(StackType *s){
    if(s->top == SIZE -1)
    return 1;
    return 0;
}

void main(){

}