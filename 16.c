// ques 16 : Write a program to check whether the entered number is prime or not.

#include<stdio.h>
int main(void)
{
    int n,i,count=0;
    printf("Enter any number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number id not prime");
    }
    return 0;
}