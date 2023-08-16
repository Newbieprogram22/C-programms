// ques 20 : Write a program to convert the binary number into a decimal number and vice versa.

#include<stdio.h>
#include<math.h>

void bin_to_dec(int a);
void dec_to_bin(int b);

int main(void)
{
    int bin,dec;
    printf("Enter any binary number:\t");
    scanf("%d",&bin);
    bin_to_dec(bin);
    printf("\nEnter any decimal number:\t");
    scanf("%d",&dec);
    dec_to_bin(dec);

}

void bin_to_dec(int a)
{
    int t = a, dec = 0,i=0,rem;
    while(t!=0)
    {
        rem = t%10;
        dec =  dec + rem*pow(2,i);
        t=t/10;
        i++;
    }
    printf("The binary number %d in decimal is:\t%d",a,dec);
}

void dec_to_bin(int b)
{
    int t = b,bin=0,i=0,rem;
    while(t!=0)
    {
        rem = t%2;
        bin = bin + rem*pow(10,i);
        t=t/2;
        i++;
    }
    printf("The decimal number %d in binary is:\t%d",b,bin);
}