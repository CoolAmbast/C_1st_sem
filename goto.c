#include<stdio.h>
int main()
{
    //goto statement tutorial
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    goto stm1;
    else
    goto stm2;
    stm1: printf("No. is even\n");
        goto stm3;
    stm2: printf("No. is odd\n");
        goto stm3;
    stm3: return 0;
}