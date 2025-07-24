#include <stdio.h>
int main()
{
    int h, m, s;
    printf("Enter time according to hours,minutes & seconds: ");
    scanf("%d%d%d", &h, &m, &s);

    if (h >= 0 && h < 24)
    {
        if (m >= 0 && m < 60)
        {
            if (s >= 0 && s < 60)
            {
                printf("Time Entered is Valid");
            }
            else
                printf("Second of time is invalid");
        }
        else
            printf("minute of time is invalid");
    }
    else
        printf("hour of time is invalid");

    return 0;
}