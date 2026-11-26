#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ; 
    struct node * next ;
};
void LinkedListTraversal(struct node * head){
    while(head != NULL){
        printf("linked list : %d\n",head->data);
        head = head->next ;
    }
}
void searching(struct node * head , int key){
    int boolean = 1 ;
    while(head != NULL){
        if(head->data==key){
            printf("%d value founded ",key);
            boolean = 0 ;
        }
        head = head->next;
    }
    if(boolean){
        printf("%d is not found",key) ;
    }
}
int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * fourth = (struct node *)malloc(sizeof(struct node));
    struct node * end = (struct node *)malloc(sizeof(struct node));
    // first node 
    head->data = 11 ; 
    head->next = second ;
    // second node 
    second->data = 22 ; 
    second->next = third ; 
    // third node 
    third->data = 33 ; 
    third->next = fourth ; 
    // fourth node 
    fourth->data = 44;
    fourth->next = end ; 
    // end Linked list 
    end->data = 55 ; 
    end->next = NULL ; 

    LinkedListTraversal(head);
    searching(head , 44);
}