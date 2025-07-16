#include<stdio.h>
int main()
{
    float F,C,K;
    printf("Enter Temp in Fahrenheit");
    scanf("%f",&F);
    C=5.0/9*(F-32);
    K=C+273.15;
    printf("Temperature in Celsius:%f\nTemperature in Kelvin:%f",C,K);
    return 0;
}