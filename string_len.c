#include<stdio.h>
main()
{
    int i=0,count=0;
    char str[20];
    printf("Enter string\n");
    gets(str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length=%d",count);
    return 0;
}