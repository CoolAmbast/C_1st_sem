#include<stdio.h>
float CIR_AREA(float PI, float r);
float TSA(float B,float l);
main(){
    float rd,le;
    printf("Enter radius\n");
    scanf("%f",&rd);
    CIR_AREA(3.141,rd);
    printf("Enter height of cone to calculate the TSA\n");
    scanf("%f",&le);
    TSA(rd,le);
    return 0;
}
float CIR_AREA(float PI,float r)
{
    float A;
    A=PI*r*r;
    return printf("Area of circle=%f\n",A);
}
float TSA(float B,float l)
{
    float sarea;
    sarea=CIR_AREA(3.141,B)+ 3.141*B*l;
    return printf("TSA=%f\n", sarea);
}