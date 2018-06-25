#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{

    char p[40];
    int pan(char []);
    printf("\n Enter String : ");//string input
    gets(p);//function declaration
    if(pan(p)==0) //function call
        printf("\nNOT ");
    printf("PALINDROME STRING \n");
    return;
}
int pan(char t[]) //Function to check string is palindrome
{
    int i=0;
    int j=strlen(t)-1;
    for(;t[i]==t[j]&&i<j;i++,j--);
    if(j<=i)
        return 1;
    else
        return 0;//not palindrome
}
