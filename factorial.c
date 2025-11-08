#include <stdio.h>

int fact(int arg)
{
    if (arg==0 || arg==1)
    {
        return 1;
    }
    else
    {
        return arg*fact(arg-1);
    }
}
int main(void)
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    printf("factorial of %d = %d",num,fact(num));
}