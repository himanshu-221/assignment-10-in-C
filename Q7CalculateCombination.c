/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
*/      

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

//NCR

int combination(int n,int r)
{
    return fact(n)/(fact(r)*(fact(n-r)));
    
}

int main()
{
    int num,comb=0,r;
    printf("Enter a number and r\n");
    scanf("%d %d",&num,&r);
    //fact(num);
    
    printf("Combination is= %d",combination(num,r));

    return 0;
}