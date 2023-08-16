//  ques 2 : Write a program that calculates the Simple Interest and Compound Interest. The Principal Amount, Rate of Interest, and Time are entered through the keyboard.

#include<stdio.h>
#include<math.h>
int main(void)
{
    long int p,t,amount;
    float r,si,ci;
    printf("Enter the principle amount, rate, time in years:\t");
    scanf("%ld%f%ld",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The interest is:\t%f\n",si);
    amount = p*(pow((1+(r/100)),t));
    ci = amount - p;
    printf("The compound interest is :\t%f\n",ci);
    printf("The total amount is:\t%d",amount);
    return 0;
}