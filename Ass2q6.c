#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    ch=tolower(ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("Entered character is a vovel");
    else
    printf("Entered chracter is a consonant");
     
    return 0;
}