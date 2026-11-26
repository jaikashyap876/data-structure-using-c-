#include <stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node * next ;
};
struct node * newNode(int value){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    return temp ;
}
void traversal(struct node * head){
    struct node * temp = head ;
    while(temp != NULL){
        printf("LinkedList Node : %d \n ",temp->data);
        temp = temp->next ;

    }
}
void addInBegining(struct node ** head , int key){
    struct node * temp = newNode(key);
    temp->next = *head ;
    *head = temp ;
}

int main(){ 
    struct node * head = newNode(10);
    struct node * second = newNode(20);
    struct node * third = newNode(30);
    struct node * fourth = newNode(40);
    struct node * end = newNode(50);

    head->next = second ;
    second->next = third ;
    third->next = fourth ;
    fourth->next = end ;

    traversal(head);
    addInBegining(&head , 0 );
    printf("After add node \n");
    traversal(head);

    return 0 ;
}