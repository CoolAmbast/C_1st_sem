#include<stdio.h>
int main()
{
    int i=0,count=0;
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of the string is: %d",count);
    return 0;
}