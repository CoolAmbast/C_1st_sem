#include<stdio.h>
int main(){
    char op;
    float num1,num2,result;
    /*Simple switch case calculator*/
    

    printf("Enter first number\n");
    scanf("%f",&num1);

    printf("Enter second number\n");
    scanf("%f",&num2);

    printf("Enter operator\n");
    scanf(" %c",&op);


    switch (op)
    {
    case '+':
        result=num1+num2;
        printf("Result is %f",result);
        break;
    
    case '-':
        result=num1-num2;
        printf("Result is %f",result);
        break;

    case '*':
        result=num1*num2;
        printf("Result is %f",result);
        break;
    
    case '/':
        result=num1/num2;
        printf("Result is %f",result);
        break;
    
    default:
        printf("Wrong operator!");
    }
    return 0;
}