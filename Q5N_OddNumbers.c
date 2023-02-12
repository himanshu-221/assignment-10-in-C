/*Write a function to print first N odd natural numbers. (TSRN)*/
#include<stdio.h>
void oddnumber(int n)
{
    int i,count=0;
    for(i=1;i<=n*2;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            count++;
        }
        else if(count==10)
        {
            printf("\n");
        }
    }
}

int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    oddnumber(num);
    return 0;
}