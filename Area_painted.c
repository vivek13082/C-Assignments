#include<stdio.h>
int main()
{
    float length,width,height;
    float door_width,door_length;
    float window_width,window_length;

    printf("Enter Room Length, breadth & height:\n");
    scanf("%f%f%f",&length,&width,&height);
    
    printf("Enter Door Width & height:\n");
    scanf("%f%f",&door_width,&door_length);

    printf("Enter Window width & height:\n");
    scanf("%f%f",&window_width,&window_length);

    float wall_area,roof_area,paint_area;
    float door_area,window_area;

    wall_area=2*(length*height+width*height);
    door_area=door_length*door_width;
    window_area=2*(window_length*window_width);
    paint_area=wall_area-door_area-window_area;
    roof_area=length*width;

    printf("Area to be painted(Walls):%.2f sq units\n",paint_area);
    printf("Area to be Whitewashed(roof):%.2f sq units\n",roof_area);

    return 0;
}