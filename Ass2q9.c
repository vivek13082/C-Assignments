#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a==b)
    printf("Both numbers are equal %d & %d",a,b);
    else if(a>b)
    printf("%d is greater than %d",a,b);
    else if(b>a)
    printf("%d is greater than %d",b,a);

    return 0;

}