#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,dist;
    printf("Enter x & y coordinates of first point:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter x & y coordinates of Second point:\n");
    scanf("%f%f",&x2,&y2);
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between two points:%2f\n",dist);
    return 0;
}