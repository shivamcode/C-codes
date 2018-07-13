#include<stdio.h>
#include<conio.h>
    void main()
    {
        int chkchar();
        switch(chkchar())
        {

        case 1:
            printf("\n Upper case "); break;
        case 2:
            printf("\n Lower case "); break;
        case 3:
            printf("\n Digit"); break;
        default:
            printf("\n Other");
        }
    }
    int chkchar()
    {

        char ch;
        printf("\n Enter Character :");
        scanf("%c",&ch);
        if(ch>='A'&&ch<=90)
            return 1;
        if(ch>=97&&ch<=122)
            return 2;
        if(ch>=48&&ch<=57)
            return 3;

    }
