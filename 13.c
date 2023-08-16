// ques 13 : Write a program to find the factorial of a given number.

#include <stdio.h>
int main(void)
{
    int n, i, fact = 1;
    printf("Enter the number to find factorial:\t");
    scanf("%d", &n);
    if (n < 0)
    {
        puts("Invalid input");
    }
    else if (n == 0)
    {
        pritnf("The factorial is 1");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("The factorial is :\t%d", fact);
    }
    return 0;
}