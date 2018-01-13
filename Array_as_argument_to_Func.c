#include<stdio.h>
#include<conio.h>
void reverse(int arr[],int i)//array will be reversed in this function
{
    printf("\n You Have Entered in Reverse Function");
    printf("\n Reverse Elements of Array ->");
    while(i>=0)
    {
        printf("\n Element [%d] :%d",i,arr[i]);
        i--;
    }
}
int main()
{
    int arr[10];
    int i=0;
    while(i<10)
    {
        printf("\n Enter No [%d] :",i);
        scanf("%d",&arr[i]);
        i++;
    }
    reverse(arr,i-1);//array and position variable passed as argument.
}
