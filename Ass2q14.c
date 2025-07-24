#include<stdio.h>
int main()
{
    float m1,m2,m3,total,avg;
    printf("Enter marks of three subjects");
    scanf("%f%f%f",&m1,&m2,&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg>=60)
    printf("First class\n");
    else if(avg>=50)
    printf("Second class\n");
    else if(avg>=35)
    printf("Third class\n");
    else
    printf("You fail\n");

    printf("Total marks=%.2f & Average=%.2f%%",total,avg);
    return 0;

}