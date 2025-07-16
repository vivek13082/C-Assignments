#include<stdio.h>
int main()
{
    float r,h,sa,v;
    printf("Enter Radius & Height of Cylinder");
    scanf("%f%f",&r,&h);
    sa=(2*(3.14*r*r))+(2*(3.14*r*h));
    v=(3.14*(r*r)*h);
    printf("Surface Area of Cylinder:%f\nVolume of Cylinder:%f",sa,v);
    return 0;

}