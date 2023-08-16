// ques 24 : Write a program to search an element in an array using Linear Search.

#include <stdio.h>
int main(void)
{
    int i, srch, a[10];
    printf("Enter the array elements:\t");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to find in the array:\t");
    scanf("%d", &srch);

    // liner search

    // for (i = 0; i < 10; i++)
    // {
    //     if (srch == a[i])
    //     {
    //         printf("The searched element \'%d\' is present at postion :\t%d", srch, i + 1);
    //         break;
    //     }
    // }
    // if (i == 10)
    // {
    //     printf("The searched element is not present in the array");
    // }

    // binary search

    int first = 0, last = 9; // last = n-1
    int mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] < srch)
        {
            first = mid + 1;
        }
        else if (a[mid] == srch)
        {
            printf("The searched element \'%d\' is present at postion :\t%d", srch, mid + 1);
            break;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2;
    }
    if (first > last)
    {
        printf("The searched element is not present in the array");
    }

    return 0;
}