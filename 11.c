// ques 11 : Write a program that takes two operands and one operator from the user and performs the operation and prints the result by using the Switch statement.

#include<stdio.h>
int main(void)
{
    char op;
    int a,b;
    printf("Enter the operator:\t");
    scanf("%c",&op);
    printf("Enter any two numbers:\t");
    scanf("%d%d",&a,&b);
    // operations
    switch(op)
    {
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b);
        break;
        case '*' : printf("%d",a*b);
        break;
        case '/' : printf("%d",a/b);
        break;
        case '%' : printf("%d",a%b);
        break;
        default : printf("Invalid input!");
    }
    return 0;
}