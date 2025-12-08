#include<stdio.h>
main()
{
    int n,i,j,temp=0,index;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values\n");
    for ( i = 0; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i] >= temp)
        {
            temp = arr[i];
            index=i;
        }
    }
    printf("The largest number in the array is: %d\n", temp);
    return 0;
}