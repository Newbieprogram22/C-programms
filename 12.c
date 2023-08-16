// ques 12 : Write a program to print the sum of all numbers up to a given number.

#include<stdio.h>
int main(void)
{
    int n,i,sum=0;
    printf("Enter to print the sum upto that nnumber:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("The sum is :\t%d",sum);
    return 0;
}