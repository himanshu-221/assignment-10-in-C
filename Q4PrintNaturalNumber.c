/*Write a function to print first N natural numbers (TSRN)*/

#include<stdio.h>
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
        if(i==10)
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    natural(num);
    return 0;
}