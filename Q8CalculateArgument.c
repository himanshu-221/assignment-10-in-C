/*Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int per(int n,int r)
{
    return fact(n)/(fact(n-r));
}

int main()
{
    int num,r;
    printf("Enter a number and value or R\n");
    scanf("%d %d",&num,&r);
    printf("arrangement is= %d",per(num,r));
    return 0;
}