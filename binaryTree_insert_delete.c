#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    char type[20];
    char company[20];
    int year ;
    struct node * left ;
    struct node * right ;
};
struct node * newNode(char type[] , char company[] , int year){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    strcpy(temp->type,type);
    strcpy(temp->company, company);
    temp->year = year ;
    temp->left = NULL ;
    temp->right = NULL ; 
    return temp ;
}
struct node *deletion(struct node *root, char key[]) {
    if (root != NULL) {
        if (strcmp(root->company, key) != 0) {
            root->left = deletion(root->left, key);
            root->right = deletion(root->right, key);
        } else {
        }
    }
    return root;
}

struct node *insertion(struct node *root, char type[],char company[], int year) {
    if (root == NULL) {
        return newNode(type, company, year);
    }
    if (year < root->year) {
        root->left = insertion(root->left, type, company, year);
    }
    else {
        root->right = insertion(root->right, type, company, year);
    }
    return root;
}

void preOrder(struct node * root){
     if(root!=NULL){
        printf("\nCompany : %s\nType : %s \nYear : %d",root->company , root->type , root->year);
        preOrder(root->left);
        preOrder(root->right);
     }
}
void postOrder(struct node * root){
     if(root!=NULL){
         preOrder(root->left);
         preOrder(root->right);
         printf("\nCompany : %s\nType : %s \nYear : %d",root->company , root->type , root->year);
     }
}
void inOrder(struct node * root){
     if(root!=NULL){
        preOrder(root->left);
        printf("\nCompany : %s\nType : %s \nYear : %d",root->company , root->type , root->year);
        preOrder(root->right);
     }
}

int main(){
    struct node * a = newNode("Electronics" , "Apple" , 2026);
   a = insertion(a, "Automobile", "Mercedes-Benz", 1886);
    a = insertion(a, "Automobile", "Ford", 1903);
    a = insertion(a, "Automobile", "BMW", 1916);
    a = insertion(a, "Automobile", "Toyota", 1937);
    a = insertion(a, "Automobile", "Honda", 1948);
    a = insertion(a, "Automobile", "Ferrari", 1939);
    a = insertion(a, "Automobile", "Tesla", 2003);
    a = insertion(a, "Automobile", "Hyundai", 1967);

    deletion(a , "tesla");
    deletion(a , "honda");
    deletion(a , "Toyota");
    inOrder(a);
}