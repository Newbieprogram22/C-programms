// ques 17 : Write a program to find the sum of digits of the entered number.

#include<stdio.h>
int main(void)
{
    int n,sum=0,rem,t;
    printf("Enter any number:\t");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        rem = t%10;
        sum = sum + rem;
        t=t/10;
    }
    printf("The sum of digits of %d is %d",n,sum);
    return 0;
}