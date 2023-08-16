// ques 15 : Write a program to print the Fibonacci series.

#include<stdio.h>
int main(void)
{
    int n,first_term=0,second_term=1,next_term;
    printf("Enter the number of terms:\t");
    scanf("%d",&n);
    printf("\n%d\t%d",first_term,second_term);
    for(int i=3 ; i<=n ; i++)
    {
        next_term = first_term + second_term;
        printf("\t%d",next_term);
        first_term = second_term;
        second_term = next_term;
    }
    return 0;
}