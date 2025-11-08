#include<stdio.h>
int main()
{
    float f,c;
    printf("Temperature conversion from F to C\nEnter temp in F\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in celcius is: %f\n",c);
    return 0;
}