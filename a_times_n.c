#include<stdio.h>
void multi(int b, int c);
void display(int result);

main()
{
    int a,n;
    printf("Enter number\n");
    scanf("%d",&a);
    printf("Enter power\n");
    scanf("%d",&n);
    multi(a,n);
    return 0;
}

void multi(int b, int c)
{
    int i,t=1;
    if (c==0)
    {
        display(1);
    }
    else
    {
        for (i=0;i<c;i++)
        {
            t=t*b;
        }
        display(t);
    }   
}

void display(int result)
{
    printf("Result= %d\n",result);
}