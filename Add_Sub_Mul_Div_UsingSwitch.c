#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b;
    char opr;
    printf("\n Enter Operand 1 :");
    scanf("%d",&a); //variable one
   // clrscr();
    printf("\nEnter Operand 2 :");
    scanf("%d",&b);//variable two

    printf("\nEnter Operator (+,-,/,*) :");
    scanf(" %c",&opr);//operator
    switch(opr)
    {
    case '+':
        printf("\nYou Choose Addition : %d",a+b);
        break;
    case '-':
        printf("\nYou Choose Subtraction : %d",a-b);
        break;
    case '*':
        printf("\nYou Choose Multiplication : %d",a*b);
        break;
    case '/':
        printf("\nYou Choose Division : %d",a/b);
        break;
    default:
        printf("You have Entered Wrong operator ");
        break;

    }
}
