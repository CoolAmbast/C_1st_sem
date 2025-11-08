#include<stdio.h>
int main()
{
    float x,y,z,a,avg;
    printf("Enter three numbers to calculate average:\n");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    a=x+y+z;
    avg=a/3;
    printf("The average of the provided numbers is:\n");
    printf("%f",avg);
    return 0;
}