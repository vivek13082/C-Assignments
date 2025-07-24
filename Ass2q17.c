#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character to be converted");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Converted character is: %c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("Converted character is: %c", ch);
    }
    else
        printf("Character is not valid");
    return 0;
}