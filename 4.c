// ques 4 : Write a program that accepts the temperature in Centigrade and converts it into Fahrenheit using the formula C / 5 = (F – 32) / 9.(from centigrade to farenheit : { F = [(9*C/5)+32] } )

#include<stdio.h>
int main(void)
{
    float f,c;
    printf("Enter the temperature in centigrade:\t");
    scanf("%f",&c);
    f = ((9*c)/5)+32;
    printf("The temperature in farenheit is:\t%f",f);
    return 0;
}