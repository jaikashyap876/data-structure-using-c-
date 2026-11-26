#include<stdio.h>
#define max 20
int stack[max];
int top = -1 ;
void push (int value){
    if(top == max-1){
        printf("Stack is Overflow \n");
    }
    else{
        top++;
        stack[top] = value;
        printf("%d Element Push \n" , stack[top]);
    }
}
void pop(){
    if(top == -1){
        printf("Stack is Empty \n");
    }
    else{
        printf("Element pop %d\n" ,stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("Stack is Empty \n");
    }
    else{
        printf("Top element is : %d",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("Stack is Empty \n");
    }
    else{
        printf("Stack Preview :\n");
        for(int i = top ; i > -1 ; i--){
            printf(" %d \n" , stack[i]);
        }
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();
}