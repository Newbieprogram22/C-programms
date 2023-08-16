// ques 14 : Write a program to print the sum of even and odd numbers from 1 to N numbers.

#include<stdio.h>
int main(void)
{
    int i,n,even_sum=0,odd_sum=0;
    printf("Enter the end number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum = even_sum + i;
        }
        else
        {
            odd_sum = odd_sum + i;
        }
    }
    printf("The sum of even numbers is:\t%d\n",even_sum);
    printf("The sum of odd numbers is:\t%d",odd_sum);
    return 0;
}