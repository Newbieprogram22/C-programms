// ques 23 : Write a program to find the minimum and maximum elements of the array.

#include<stdio.h>
int main(void)
{
    int i,a[5],min,max;
    printf("Enter the array elements:\t");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    min  = a[0];
    for(i=1;i<5;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
    printf("The min value is:\t%d",min);
    max = a[i];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("\nThe max value is:\t%d",max);
    return 0;
}