#include<stdio.h>
int avg(int a,int b,int c);
main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Average=%d", avg(a,b,c));
}
int avg(int a,int b,int c)
{
    return (a+b+c)/3;
}