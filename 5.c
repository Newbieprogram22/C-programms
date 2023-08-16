// ques 5 (part 1): Write a program that swaps the values of two variables using a third variable.

#include<stdio.h>
void swap(int c , int d);
int main(void)
{
    int a=3,b=2,temp;
    printf("Before swap: %d and %d\n",a,b);
    swap(a,b);
    // swapping two numbers
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d and %d",a,b);
}

// swapping of two numbers without third variable
void swap(int c , int d)
{
    c = c*d;      // c -> 6
    d = c/d;      // d -> 3
    c = c/d;      // c -> 2
    printf("Swapping of two numbers without third variable is: %d and %d\n",c,d);
}