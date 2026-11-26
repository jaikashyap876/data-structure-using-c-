#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void traversal(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("LinkedList : %d\n", temp->data);
        temp = temp->next;
    }
}
void insertByAfterValue(struct node **head, int data, int value)
{
    struct node *new = newnode(data);
    struct node *temp = *head;

    while (temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Value not Found \n");
        free(new);
        return ;
    }
    printf("New Node Inserted (Insert By Value) : %d \n",data);
    new->next = temp->next;
    temp->next = new;
}
void insertByIndex(struct node **head, int index, int data)
{
    struct node *new = newnode(data);
    struct node *temp = *head;
    int step = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        step++;
        if (step == index)
        {   
            printf("New Node Inserted (Insert by Index): %d \n",data);
            new->next = temp->next;
            temp->next = new;
            return;
        }
    }
    if (temp == NULL)
    {
        printf("Index Not Found\n");
        free(new);
    }
}
void addInSortingLinkedList(struct node ** head ,int data ){
    struct node * new = newnode(data);
    struct node * temp = *head;

    while(temp!=NULL){
        temp = temp->next;
        if(temp->data < data){
            printf("%d Node Will Inserted between (Between Sorting Elements) (Node :%d and Node :%d) \n" , data , temp->data , temp->next->data);
            new->next = temp->next;
            temp->next = new ;
            return ;
        }
    }
}
int main()
{
    struct node *head = newnode(10);
    struct node *second = newnode(20);
    struct node *third = newnode(30);
    struct node *fourth = newnode(40);
    struct node *fifth = newnode(50);
    struct node *end = newnode(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = end;
    end->next = NULL;

    traversal(head);
    insertByAfterValue(&head , 55 , 50);
    insertByIndex(&head , 3 , 35);
    addInSortingLinkedList(&head , 22);

    traversal(head);
}