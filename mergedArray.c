#include <stdio.h>
void inputArray(int array[], int n)
{
    printf("Enter element of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t %d ", array[i]);
    }
    printf("\n");
}
void sortingArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
void mergingArray(int array1[], int array2[], int mergeArray[], int n, int n1, int n2)
{
    int index = 0 ;
    for(int i = 0 ; i < n1 ; i++){
        mergeArray[index]=array1[i];
        index++;
    }
    for(int j = 0 ; j <n2 ; j++){
        mergeArray[index]=array2[j];
        index++;
    }
}
int main()
{
    int n1, n2;
    printf("Enter size of first Array :");
    scanf("%d", &n1);
    printf("Enter size of Second Array :");
    scanf("%d", &n2);
    int array1[n1];
    int array2[n2];
    int n = n1 + n2;
    int mergeArray[n];
    inputArray(array1, n1);
    inputArray(array2, n2);
    mergingArray(array1,array2,mergeArray,n,n1,n2);
    printf("After merging Two Array ");
    printArray(mergeArray , n);
    printf("After sorted Array ");
    sortingArray(mergeArray , n);
    printArray(mergeArray , n);

}