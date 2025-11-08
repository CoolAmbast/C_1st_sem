#include<stdio.h>
int main()
{
    //loop with continue statement
    int i;
    for(i=0; i<10; i++) 
    {
        if (i==4)
            continue;
        printf("i=%d\n",i);
    }
    return 0;
}