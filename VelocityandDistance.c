#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter initial Velocity,Acceleration and Time");
    scanf("%f%f%f",&u,&a,&t);
    v=u+a*t;
    s=u+a*(t*t);
    printf("Final velocity is:%f\n Total Distance travelled is%f",v,s);
    return 0;
}