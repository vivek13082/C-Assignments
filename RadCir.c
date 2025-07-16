#include<stdio.h>
int main()
{
    float r,area,circum;
    printf("enter radius of circle");
    scanf("%f",&r);
    area=3.14*(r*r);
    circum=2*(3.14*r);
    printf("Area of circle:%f\nCircumference of circle:%f",area,circum);
    return 0;
}