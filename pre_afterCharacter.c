#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:\n");
    scanf("%c",&ch);

    printf("Previous Character is:%c\n",ch-1);
    printf("Next character  is:%c",ch+1);
    return 0;
}