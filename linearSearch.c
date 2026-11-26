#include <stdio.h>
void readArray(int array[], int n)
{
    printf("Array Elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", array[i]);
    }
}
void inputArray(int array[], int n)
{
    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
void insertionSort(int array[] , int n){
    for(int i = 0 ; i < n ; i ++){
        int key = array[i] ;
        int prev = i - 1 ;
        while(prev >= 0 && array[prev] > key){
            array[prev+1] = array[prev];
            prev--;
        }
        array[prev+1]= key ;
    }
}
int main()
{
    int n;
    printf("Enter Array size : ");
    scanf("%d", &n);
    int array[n] ;
    inputArray(array , n);
    insertionSort(array , n);
    readArray(array , n);

}