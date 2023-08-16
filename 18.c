// ques 18 : Write a program to find the reverse of a number.

#include<stdio.h>
int main(void)
{
    int n,rev=0,rem,t;
    printf("Enter any number:\t");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        rem = t%10;
        rev = (rev *10) + rem;
        t=t/10;
    }
    printf("The reverse of %d is %d",n,rev);
    return 0;
}