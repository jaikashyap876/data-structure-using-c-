#include<stdio.h>
void printArray(int array[] , int n ){
    printf("\nArray Elements : ");
    for(int i = 0 ; i < n ; i ++){
        printf("%d\t" , array[i]);
    }
}
int partion(int array[] , int start , int end){
    int index = start-1 ;
    int pivat = array[end];
    for(int i = start ; i < end ; i ++){
        if(array[i]<=pivat){
            index++ ;
            int temp = array[i];
            array[i] = array[index];
            array[index]= temp ;
        }
    }
    index++ ;
    int temp = array[end];
    array[end] = array[index];
    array[index]= temp ;
    return index;
}
void quickSort(int array[] , int start , int end ){
    if(start<end){
        int pivat = partion(array , start , end);
        quickSort(array , start , pivat-1);
        quickSort(array , pivat+1 , end);
    }
}
int main(){
    int array[7] = {3 , 1 ,2 ,5 ,8 ,4 ,6};
    // mergeSort(array , 0 , 7);
    quickSort(array , 0 , 7);
    printArray(array , 7);
}