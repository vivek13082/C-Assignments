#include<stdio.h>
int main()
{
    int r1,r2,r3,amt=0,ttl;
    printf("Enter the amount to be withdrawn");
    scanf("%d",&amt);
    ttl=amt;
    r1=amt/10;
    amt=amt%10;
    r2=amt/5;
    amt=amt%5;
    r3=amt;
    printf("10rs Note=%d\n5rs Note=%d\n1rs Note=%d\nTotal amount=%d",r1,r2,r3,ttl);
    return 0;
}