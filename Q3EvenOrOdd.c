/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0.*/

#include<stdio.h>

int evenodd(int num)
{
   return (num%2==0);
}

int main()
{
    int num;
    printf("Enter a number to check even or odd\n");
    scanf("%d",&num);
    if(evenodd(num)==1){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}