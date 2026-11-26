#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    struct node * preview ;
    char employeeName[50];
    char jobRole[50];
    int id ; 
    struct node * next ;  
};
struct node * newNode(char employeeName [] , char jobRole[] , int id ){
    struct node * new = (struct node *)malloc(sizeof(struct node ));
    new->preview = NULL;
    strcpy(new->employeeName,employeeName);
    strcpy(new->jobRole, jobRole );
    new->id = id ; 
    new->next = NULL ;
    return new ;
}
void traversalForward(struct node * head){
    while(head!=NULL){
        printf("------------------------\n");
        printf("Employee Name : %s \n Job Role : %s \n ID : %d \n",head->employeeName , head->jobRole , head->id);
        head=head->next ;
    }
}
void traversalBackward(struct node * tail){
    while (tail!=NULL){
        printf("------------------------\n");
        printf("Employee Name : %s \n Job Role : %s \n ID : %d \n",tail->employeeName , tail->jobRole , tail->id);
        tail = tail->preview ;
    }   
}
void insertion(struct node ** head ,char employeeName [] , char jobRole[] , int id ){
    struct node * p = *head ;
    struct node * new = newNode(employeeName , jobRole , id);
    new->preview=NULL ;
    p->preview = new ;
    new->next = p ;
    *head = new ;
}
void deletion(struct node ** tail){
    struct node * p = *tail ;
    struct node *q = p->preview ;
    q->next = NULL ;
    *tail = q ;
    free(p);
}
int main(){
    struct node * first = newNode("suresh " , "developer",01);
    struct node * second = newNode("jai " , "CEO",02);
    struct node * third = newNode("sanjeev " , "designer",03);
    struct node * fourth = newNode("laxman " , "devOps",04);
    struct node * fifth = newNode("lokesh " , "tester",05);
    
    first->preview = NULL ;
    first->next=second ;
    second->preview = first ;
    second->next = third ;
    third->preview=second ;
    third->next=fourth ;
    fourth->preview = third ;
    fourth->next= fifth ;
    fifth->preview = fourth ;
    fifth->next = NULL ;

    struct node * head = first ;
    struct node * tail = fifth ;
    insertion(&head , "shinchan " , "cafe owner " , 9);
    deletion(&tail);
    traversalForward(head);

    return 0 ;
}