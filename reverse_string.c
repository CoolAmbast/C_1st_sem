#include<stdio.h>
main()
{
    int i=0,j=0,count=0,temp;
    char str[20];
    printf("Enter string\n");
    gets(str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    j=count-1;
    while(i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
    printf("Reverse string\n");
    puts(str);
    return 0;
}