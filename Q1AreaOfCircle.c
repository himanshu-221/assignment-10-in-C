/* Write a function to calculate the area of a circle. */

#include<stdio.h>
#include<math.h>
float areaofcircle(float r)
{
    return 3.14*r*r;
}
int main()
{
    printf("Enter radius of circle\n");
    float r,area;
    scanf("%f",&r);
    area = areaofcircle(r);
    printf("Area of circle is = %.2f",area);
    return 0;
}