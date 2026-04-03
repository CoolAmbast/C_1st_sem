#include<stdio.h>
main()
{
    int i=0,j=0;
    char str1[20],str2[20],str3[20];
    printf("Enter string 1\n");
    gets(str1);
    printf("Enter string 2\n");
    gets(str2);
    while (str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    while (str2[j]!='\0')
    {
        str3[i]=str2[j];
        j++;
        i++;
    }
    str3[j]='\0';
    printf("New string=\n");
    puts(str3);
    return 0;
    
}