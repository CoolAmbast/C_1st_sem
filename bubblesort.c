#include<stdio.h>
void bubblesort(int arr[],int n);
void printArray(int arr[],int size);
main()
{
    int arr[10];
    int n = sizeof(arr)/ sizeof(arr[0]);
    int i;
    printf("Enter 10 numbers to sort\n");
    for ( i = 0; i <=arr[10]; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("original array\n");
    printArray(arr,n);
    bubblesort(arr,n);
    printf("Sorted array\n");
    printArray(arr,n);
}
void bubblesort(int arr[10],int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for ( j = 0; j<n-1; j++)
        {
            if (arr[j]> arr[j+1])
            {
                temp =arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
}
void printArray(int arr[10],int size)
{
    int i;
    for (i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}