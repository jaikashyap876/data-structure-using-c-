#include<stdio.h>
void printArray(int array[] , int n ){
    printf("\nArray Elements : ");
    for(int i = 0 ; i < n ; i ++){
        printf("%d\t" , array[i]);
    }
}
void merge(int array[] , int smallIndex , int mid , int n ){
    int temp[n] ;
    int index = smallIndex ;
    int i = smallIndex , j = mid+1 ;

    while(i <= mid && j <= n){

        if(array[i] < array[j]){
            temp[index] = array[i];
            i++ ;
        }
        else{
            temp[index] = array[j];
            j++;
        }
        index++;
    }
    while(i<=mid){
        temp[index] = array[i] ;
        i++;
        index++;
    }
    while(j<=n){
        temp[index] = array[j] ;
        j++;
        index++;
    }
    for(int i = smallIndex ; i <= n ; i ++){
        array[i] = temp[i];
    }
}
void mergeSort(int array[]  , int smallindex , int n){
    if(smallindex<n){

        int mid = smallindex + (n-smallindex)/2;
        // left part 
        mergeSort(array ,smallindex , mid);
        // right 
        mergeSort(array , mid+1 , n);
        // merging 
        merge(array , smallindex , mid , n);
    }
}
int main(){
    int array[7] = {3 , 1 ,2 ,5 ,8 ,4 ,6};
    mergeSort(array , 0 , 7);
    printArray(array , 7);
}