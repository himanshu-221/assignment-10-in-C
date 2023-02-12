/* Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

#include<stdio.h>
void factor(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;
        }
    }
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    factor(num);
    return 0;
}