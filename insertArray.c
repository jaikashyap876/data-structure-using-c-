#include <stdio.h>
void printArray(int array[] , int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
}
void inputArray(int array[] , int n ){
    printf("Enter element of array : \n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }

}
void insertionArray(int array[], int *n) {
    printf("Enter element to insert: ");
    int element;
    scanf("%d", &element);
    
    printf("Enter index location (0 to %d): ", *n);
    int location;
    scanf("%d", &location);

    for (int i = *n - 1; i >= location; i--) {
        array[i + 1] = array[i];
    }
    array[location] = element;
    *n = *n + 1; 
}

int main(){
    int n ;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int array[n];
    inputArray(array , n );
    insertionArray(array , &n);
    printArray(array , n);
    
}