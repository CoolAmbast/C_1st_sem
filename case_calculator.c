#include <stdio.h>
int main()
{
    int op;
    float num1,num2,result;
    printf("**SIMPLE CALCULATOR**\n");
    printf("What operation do you want to perform?\n");
    printf("1.)Addition\n2.)Substraction\n3.)Multiplication\n4.)Division\n5.)Reminder\n");
    printf("Choose an option(1,2,3,4,5) from above to get started...\n");
    scanf("%d", &op);
    if (op <= 5, op !=0)
    {
        printf("Enter first number\n");
        scanf("%f", &num1);
        printf("Enter second number\n");
        scanf("%f", &num2);
        switch (op)
        {
        case 1:
            result = num1 + num2;
            printf("\nResult of %f+%f=%f", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nResult of %f-%f=%f", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nResult of %f*%f=%f", num1, num2, result);
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult of %f/%f=%f", num1, num2, result);
            }
            else
            {
                printf("\nError: Division by zero not possible!");
            }
            break;

        case 5:
            if ((int)num2 != 0)
            {
                result = (int)num1 % (int)num2;
                printf("\nResult of %d %% %d=%d", (int)num1, (int)num2, (int)result);
            }
            else
            {
                printf("\nError: Modulo by zero not possible!");
            }
            break;

        default:
            printf("\nInvalid Operator :(");
        }
    }
    else
    {
        printf("Invalid option selected!");
    }

    return 0;
}