#include<stdio.h>
int add(int x, int y);
main()
{
    int a,b,sum;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    sum=add(a,b);
    printf("a+b=%d",sum);
    return 0;
}
int add(int x,int y)
{
    int s;
    s=x+y;
    return s;

}