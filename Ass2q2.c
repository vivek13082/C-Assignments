#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    if(n%2==0)
    printf("Number is Even\n");
    else
    printf("Number is Odd\n");

    //Using Ternery Operator
    printf("Using ternery operator\n");
    (n % 2 ==0) ?printf("Number is even"):printf("Number is odd");
    return 0;
}