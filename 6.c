// ques 6 : Write a program that checks whether the two numbers entered by the user are equal or not.

#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter any two numbers:\t");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("The numbers are equal\n");
    }
    else 
    {
        printf("The numbers is unequal\n");
    }
    return 0;
}