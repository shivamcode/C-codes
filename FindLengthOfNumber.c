#include<stdio.h>
#include<conio.h>

void main()
{

    int length();
    printf("\n Length of given number is : %d",length());
}
int length()
{

    int number;
    int len=0;
    printf("\n Enter Number :");
    scanf("%d",&number);
    while(number!=0)
    {
        len++;
        number/=10;
    }
    return len;
}
