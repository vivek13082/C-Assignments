#include<stdio.h>
int main()
{
    int y;
    printf("Enter year to be checked");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0 || y%400==0)
    printf("%d is a Leap year",y);
    else
    printf("%d is not a Leap year");
    return 0;
}