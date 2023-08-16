// ques 3 : Write a program to calculate the area and circumference of a circle.

#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main(void)
{
    float radius,area,circum;
    printf("Enter radius:\t");
    scanf("%f",&radius);
    area = pi * pow(radius,2);
    circum = 2 * pi * radius;
    printf("The area and circumference of the circle is:\t%f\tand\t%f",area,circum);
    return 0;
}