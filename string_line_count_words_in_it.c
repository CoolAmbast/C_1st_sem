#include<stdio.h>
main()
{
    int i=0,count=0;
    char str[20];
    printf("Enter string\n");
    gets(str);
    while(str[i]!='\0')
    {
        if (str[i]==32)
        {
            count++;
        }
        i++;
        
    }
    printf("No. of words=%d",count+1);
    return 0;
}