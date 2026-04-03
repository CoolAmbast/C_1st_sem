#include<stdio.h>
main()
{
    int i=0;
    char str[20];
    printf("Enter string\n");
    gets(str);
    while(str[i]!='\0')
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
        
    }
    puts(str);
    return 0;
}