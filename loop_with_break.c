#include<stdio.h>
int main()
{
    //loop with break statement
    int i;
    for(i=0; i<10; i++) 
    {
        if (i==4)
            break;
        printf("i=%d\n",i);
    }
    return 0;
}