#include<stdio.h>
#include <string.h>
main()
{
    int a;
    float b;
    char c;
    char str[15];
    printf("Enter int number\n");
    scanf("%d",&a);
    printf("Enter float number\n");
    scanf("%f",&b);
    printf("Enter character\n");
    scanf(" %c",&c);
    printf("Enter string value\n");
    scanf("%s",&str);
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);
    printf("%s",str);
    return 0;
}