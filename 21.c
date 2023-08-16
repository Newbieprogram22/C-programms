// ques 21 : Write a program that simply takes elements of the array from the user and finds the sum of these elements.

#include <stdio.h>
int main(void)
{
    int n,i,a[30];
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    printf("Enter the array elements:\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements are:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}