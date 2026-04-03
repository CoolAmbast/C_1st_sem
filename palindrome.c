#include<stdio.h>
main()
{
    int i=0,j,count=0,flag;
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
        if (str[i]==str[j])
        {
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    i++;
    j++;
    }
    if (flag==0)
    {
        printf("Not a palindrome\n");
    }
    else
    {
        printf("palindrome\n");
    }
    return 0;
}