#include <stdio.h>
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}
void inputArray(int array[], int n)
{
    printf("Enter elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
void deletionArray(int array[], int *n)
{
    printf("Enter index For delete : ");
    int index;
    scanf("%d", &index);
   for (int i = index; i < *n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    *n = *n - 1;
}
int main()
{
    int n;
    printf("enter size of array :");
    scanf("%d", &n);
    int array[n];
    inputArray(array, n);
    printArray(array, n);
    deletionArray(array, &n);
    printf("After Delete a index ");
    printArray(array, n);
}