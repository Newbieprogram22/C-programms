// ques 19 : Write a program to print Armstrong numbers from 1 to 1000.

#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,rem,sum,t;
    for(i=100;i<=1000;i++)
    {
        t = i;
        sum = 0;
        while(t!=0)
        {
            rem= t%10;
            sum = sum + pow(rem,3);
            t = t/10;
        }
        if(sum == i)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}