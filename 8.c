// ques 8 : Write a program that finds whether a given number is even or odd.

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter any number:\t");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}