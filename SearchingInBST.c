#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node * left ;
    struct node * right ;
};
struct node * newNode(int data){
    struct node * new = ( struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL ;
    new->right = NULL;
    return new ;
}
void inOrder(struct node * root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d \t",root->data);
        inOrder(root->right);
    }
}
struct node * searchNode(struct node * root , int key){
    if(root!=NULL){
        if(root->data == key){
            printf("\nYes founded ");
            return root;
        }
        else if(root->data <key ){
            return searchNode(root->right , key);
        }
        else{
            return searchNode(root->left , key);
        }
    }
    else{
        printf("\nNot founded ");
        return NULL ;
    }
}
int main()
{
    struct node *a = newNode(50);
    struct node *b = newNode(30);
    struct node *c = newNode(70);
    struct node *d = newNode(20);
    struct node *e = newNode(40);
    struct node *f = newNode(60);
    struct node *g = newNode(80);
    struct node *h = newNode(10);
    struct node *i = newNode(35);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    d->left = h;
    d->right = NULL;

    e->left = i;
    e->right = NULL;

    f->left = NULL;
    f->right = NULL;

    g->left = NULL;
    g->right = NULL;

    h->left = NULL;
    h->right = NULL;

    i->left = NULL;
    i->right = NULL;

    struct node *root = a;
    inOrder(root);
    struct node * temp = searchNode(root , 351);
  
}