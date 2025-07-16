#include<stdio.h>
int main()
{
    float l,b,h,Sa,V;
    printf("Enter length,breadth & Height of Cuboid");
    scanf("%f%f%f",&l,&b,&h);
    Sa=2*(l*b+l*h+b*h);
    V=l*b*h;
    printf("Surface Area of Cuboid:%f\nVolume of Cuboid:%f",Sa,V);
    return 0;
}