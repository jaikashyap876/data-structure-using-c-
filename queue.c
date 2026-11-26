#include<stdio.h>
#define max 20 
int queue [max] ;
int front = -1 ; 
int rear = -1 ; 
void enqueue(int value){
    if(rear == max-1){
        printf("Overflow \n");
    }
    else{
        if(front==-1){
            front=0 ;
        }
        rear++;
        queue[rear]= value ;
        printf("%d Value added in Queue\n",value);
    }
}
void dQueue(){
    if(front == -1 || front > rear ){
        printf("The Queue is empty \n");
    }
    else{
        printf("%d has been Deleted \n" , queue[front]);
        front ++ ;
    }
}
void display(){
    if(front == -1 || front > rear ){
        printf("The Queue is empty \n");
    } else{
        printf("Queue Elements : \n");
        for(int i = front ; i <= rear ; i++){
            printf("%d\n",queue[i]);
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dQueue();
    dQueue();
    display();

} 