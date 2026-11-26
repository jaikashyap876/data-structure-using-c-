#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ; 
    struct node * next ;
};
struct node * newnode(int data){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->data = data ;
    new->next = NULL ;

    return new ;
}
void traversal(struct node * head){
    struct node * temp = head ;
    while(temp!=NULL){
        printf("LinkedList : %d\n",temp->data);
        temp=temp->next ;
    } 
}
void deleteByValue(struct node ** head , int value ){
    struct node * p = *head ;
    struct node * q = p->next ;
    while(q!= NULL){
        if(q->data == value){
            p->next = q->next ;
            printf("Node deleted %d\n" , value);
            free(q);
            return ;
        }
        p=p->next ;
    }
}

int main(){
    struct node * head = newnode(10);
    struct node * second = newnode(20);
    struct node * third = newnode(30);
    struct node * fourth = newnode(40);
    struct node * fifth = newnode(50);
    struct node * end= newnode(60);

    head->next = second ; 
    second->next = third ; 
    third->next = fourth ; 
    fourth->next = fifth ; 
    fifth->next = end;
    end->next = NULL ;
    traversal(head);
    deleteByValue(&head ,20);
    traversal(head);
    

}