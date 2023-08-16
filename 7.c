// ques 7 : Write a program to find the greatest of three numbers.

#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter any three numbers:\t");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is greater");
    }
    else if (b>a && b>c)
    {
        printf("B is greater");
    }
    else 
    {
        printf("C is greater");
    }
    return 0;
}