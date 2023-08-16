// ques 22 : Write a program that inputs two arrays and saves the sum of corresponding elements of these arrays in a third array and prints them.

#include<stdio.h>
int main(void)
{
    int i,n,a[30],b[30],c[30];
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    printf("Enter the elements of first array:\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array:\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The elements of first array:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe elements of second array:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\nThe sum of elements of array a and b are:\t");
    for(i=0;i<n;i++)
    {
        c[i] = a[i]+b[i];
        printf("%d\t",c[i]);
    }
    return 0;
}