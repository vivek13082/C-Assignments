#include<stdio.h>
int main()
{
    float bs,hra,tax,da,ttls;
    printf("Enter Basic Salary");
    scanf("%f",&bs);
    hra=10;da=30;tax=5;
    ttls=bs+((bs*(da+hra-tax))/100);
    printf("The Total Salary is:%f",ttls);
    return 0;
}