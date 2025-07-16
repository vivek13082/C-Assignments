#include<stdio.h>
int main()
{
    float n1,n2,AM,HM;
    printf("Enter two numbers");
    scanf("%f%f",&n1,&n2);
    AM=(n1+n2)/2;
    HM=(n1*n2)/(n1+n2);
    printf("Arithematic Mean:%f\n Harmonic Mean=%f",AM,HM);
    return 0;
}