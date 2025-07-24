#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter X and Y coordinates");
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0)
        printf("point lies at the origin\n");
    else if (x > 0 && y > 0)
        printf("point lies in First quadrant\n");
    else if (x < 0 && y > 0)
        printf("point lies in second quadrant\n");
    else if (x < 0 && y < 0)
        printf("point lies in third quadrant\n");
    else if (x > 0 && y < 0)
        printf("point lies in fourth quadrant\n");
    else if (x == 0)
        printf("point lies on y-axix\n");
    else
        printf("point lies on x-axix\n");

    if (x == 0 && y == 0)
        printf("Logic 2: point ar the origin.\n");
    else if (x == 0)
        printf("Logic 2: Point lies at Y-axis.\n");
    else if (y == 0)
        printf("Logic 2: point lies at X-axis.\n");
    else
    {
        if (x > 0)
        {
            if (y > 0)
                printf("Logic 2: point lies at Quadrent I.\n");
            else
                printf("Logic 2: point lies at Quadrent IV.\n");
        }
        else
        {
            if (y > 0)
                printf("Logic 2: point lies at Quadrent II.\n");
            else
                printf("Logic 2: point lies at Quadrent III.\n");
        }
    }

    return 0;
}