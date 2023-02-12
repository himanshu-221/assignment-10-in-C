/*Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include<stdio.h>

int check(int num,int n)
{
    int x,r=0;
    x=num;
    while(x!=0)
    {
        
        r=x%10;
        x=x/10;
        if(r==n)
        {
            return 1;
        }
    }
}

int main()
{
    int num,n;
    printf("Enter a number and a single digit\n");
    scanf("%d %d",&num,&n);
    if(check(num,n)==1)
    printf("yes, number is contain given digit\n");
    else
    printf("Number is not contain given digit\n");
    return 0;
    
}