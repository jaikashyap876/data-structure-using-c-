#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int collegId ;
    char college[20];
    char courses[15];
    struct node * next ;
};
struct node * newNode(int collegeId , char college[] , char courses[]){
    struct node * new = (struct node *)malloc(sizeof(struct node));
    new->collegId = collegeId ;
    strcpy(new->college,college);
    strcpy(new->courses,courses);
    new->next=NULL;
    return new;
}
void traversal(struct node * head){
    struct node * p = head;
    do
    {
        printf("------------------------\n");
        printf("ID : %d\nCollege Name : %s\nCourses :%s\n",p->collegId , p->college , p->courses);
        p=p->next;
    } while (p->next!=p);
    
}
void insertion(struct node ** head ,int collegeId , char college[] , char courses[]  ){
    struct node * new = newNode(collegeId , college , courses);
    struct node * p = *head ;
    new->next = p ;
    *head = new ;
}
void deletion(struct node ** head){
    struct node * p = * head ;
    struct node * q = p->next ;
    while(q->next!=NULL){
        p=q;
        q=q->next ;
    }
    p->next=NULL ;
    free(q);


}
int main(){
    struct node * first = newNode(121 , "MSIT " , "B Tech ");
    struct node * second = newNode(312 , "MAIT " , "bba");
    struct node * third = newNode(331 , "BPIT " , "LAW");
    struct node * fourt = newNode(453 , "BVIT " , "BCA");

    first->next = second ;
    second->next = third ;
    third->next = fourt ;
    fourt->next = NULL ;
    struct node * head = first ;
    insertion(&head ,512 , "AMITY ", "DIPLOMA" );
    insertion(&head , 311 , "USICT" , "M TECH");
    deletion(&head);
    deletion(&head);
    traversal(head);

}