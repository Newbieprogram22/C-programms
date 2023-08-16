/* ques 10 : Write a program that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
Between			
90-100%—————————Print ‘A’
80-90%—————————–Print ‘B’
60-80%—————————–Print ‘C’
Below 60%————————Print ‘D’.
*/

#include<stdio.h>
int main(void)
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enter the number of five subjects:\t");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per = ((m1+m2+m3+m4+m5)*100)/500;
    printf("\n%f\n",per);
    if(per > 90 && per <= 100)
    {
        puts("You got grade \'A\'");
    }
    else if(per > 80 && per <= 90)
    {
        puts("You got grade \'B\'");
    }
    else if(per > 60 && per <= 80)
    {
        puts("You got grade \'C\'");
    }
    else 
    {
        puts("You got grade \'D\'");
    }
    return 0;
}