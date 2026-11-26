#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ; 
    struct node * next ;
};
struct node * newnode(int data ){
    struct node * new = (struct node * )malloc (sizeof(struct node));
    new->data = data ;
    new->next = NULL ;
    return new ;
}
void traversalLinkedList(struct node * head){
    struct node * temp = head ;
    while(temp!=NULL){
        printf("LinkedList : %d\n" , temp->data);
        temp = temp->next;
    }
}
void deletionInLast(struct node ** head){
    struct node * p = *head;
    struct node * q = p->next;
    while(q->next!=NULL){
        p=q ;
        q = q->next ;
    }
    printf("Last node Deleted \n");
    p->next = NULL ;
    free(q);
}
int main(){
    struct node * head = newnode(10);
    struct node * second = newnode(20);
    struct node * third = newnode(30);
    struct node * fourth = newnode(40);
    struct node * fifth = newnode(50);
    struct node * end = newnode(60);

    head->next = second ;
    second->next = third ; 
    third->next = fourth ; 
    fourth->next = fifth ; 
    fifth->next = end ; 
    end->next = NULL ;
    
    traversalLinkedList(head);
    deletionInLast(&head);
    traversalLinkedList(head);
}