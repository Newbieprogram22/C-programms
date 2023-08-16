// ques 9 : Write a program that tells whether a given year is a leap year or not.

#include<stdio.h>
int main(void)
{
    int year;
    printf("Enter the Year:\t");
    scanf("%d",&year);
    if((year%4==0 && (year%100!=0)) || ((year%400)==0))
    {
        puts("\nLeap Year.");
    }
    else
    {
        puts("\nNot a leap year.");
    }
}