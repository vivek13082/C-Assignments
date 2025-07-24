#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three sides of Triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    printf("The Triangle is valid");
    else
    printf("Triangle is invalid");
    return 0;
}