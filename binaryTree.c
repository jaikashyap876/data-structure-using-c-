#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node * left ;
    struct node * right ;
};
struct node * newNode(int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data ;
    temp->left = NULL ;
    temp->right = NULL ;
    return temp ;
}
void preOrder(struct node * root){
    if(root!=NULL){
        printf("%d \t",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
} 
void postOrder(struct node * root){
    if(root!=NULL){
        preOrder(root->left);
        preOrder(root->right);
        printf("%d \t",root->data);
    }
} 
void inOrder(struct node * root){
    if(root!=NULL){
        preOrder(root->left);
        printf("%d \t",root->data);
        preOrder(root->right);
    }
} 
int main(){
    struct node * a = newNode(10);
    struct node * b = newNode(20);
    struct node * c = newNode(30);
    struct node * d = newNode(40);
    struct node * e = newNode(50);
    struct node * f = newNode(60);
    struct node * g = newNode(70);
    // root node ; 
    a->left = b ;
    a->right = c ;
    // level 2
    b->left = d;
    b->right = e;

    c->left = f ; 
    c->right = g ;

    // level 3 
    d->right = NULL ;
    d->left = NULL ;

    e->left = NULL ;
    e->right = NULL ;

    f->left = NULL ;
    f->right = NULL ;

    f->left = NULL ;
    f->right = NULL ;
    printf("\nPre-Order Tree :\n");
    preOrder(a);

    printf("\nPost-Order Tree :\n");
    postOrder(a);

    printf("\nIn-Order Tree :\n");
    inOrder(a);

}