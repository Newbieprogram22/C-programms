//ques 1 : Write a program that accepts the marks of 5 subjects and finds the sum and percentage of marks obtained by the student.

#include <stdio.h>
int main(void)
{
    int m1,m2,m3,m4,m5,sum = 0 ,per;
    printf("Enter the marks of 5 subjects:\t");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    printf("The total number obtained is:\t%d\n",sum);
    per=(float)((sum*100)/500);
    printf("The percentage is :\t%d",per);
    return 0;
}