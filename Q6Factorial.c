/* Write a function to calculate the factorial of a number. (TSRS)*/

#include<stdio.h>
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int num,fact;
    printf("Enter a number\n");
    scanf("%d",&num);
   fact= factorial(num);
   printf("Factorial is= %d",fact);
   return 0;
}