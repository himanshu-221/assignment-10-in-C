/* Write a function to calculate simple interest. */

#include<stdio.h>
#include<math.h>
float simpleintrest(float num,float intrest)
{
    return num*intrest/100;
}

int main()
{
    float num,intrest,result;
    printf("Enter value or intrest rate(%%)\n");
    scanf("%f %f",&num,&intrest);
    result=simpleintrest(num,intrest);
    printf("Simple intrest is= %.2f",result);

    return 0;
}