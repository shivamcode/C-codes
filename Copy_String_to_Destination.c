#include<stdio.h>
#include<conio.h>
void main()
{
    char s[40],t[40];
    int i=0;
    printf("\nEnter String :");
    gets(s);//string stored in character array s
    while(s[i]!='\0')
    {
        t[i]=s[i];//copying source to destination
        i++;
    }
    printf("String From Character Array t[Destination] :");
    puts(t);
}
