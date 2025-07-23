#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number to be checked");
    scanf("%d",&n);
    if(n%5==0){
        if(n%7==0){
            printf("Number is divisible by 5 & 7");
        }else
        printf("Number is divisible by 5 but not 7");   
    }else
    if(n%7==0){
        printf("Number is divisible by 7 but not 5");
    }else
    printf("Number is not divisible by both");

    printf("\nBy using && operator");
    if(n%5==0 && n%7==0)
    printf("\n Number is Divisible by both 5 & 7");
    else
    printf("\nNumber is not Divisible by both 5 & 7");

    return 0;
}