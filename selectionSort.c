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
void selectionSort(int array[] , int n){
    for(int i = 0 ; i < n-1 ; i ++){
        int minIndex = i ;
        for(int j = i + 1 ; j < n ; j ++ ){
            if(array[j]<array[minIndex]){
                minIndex = j;
            }
        }
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp ;
    }
}
int main()
{
    int n;
    printf("Enter Array size : ");
    scanf("%d", &n);
    int array[n] ;
    inputArray(array , n);
    selectionSort(array , n);
    readArray(array , n);

}