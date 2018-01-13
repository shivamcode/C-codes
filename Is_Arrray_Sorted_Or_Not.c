#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10]; // Array of type Integer size of 10
    int i=0,j=0;
    printf("\n Enter Ten Elements In Array ->");
    while(i<10)
    {
        printf("\n arr[%d] :",i);
        scanf("%d",&arr[i]);//taking input in array
        i++;
    }
    i=0;
    while(i<=10)
    {
        if(arr[i]<arr[i+1])// is array ordered in ascending from
            i++;
        else
            break;
    }

    if(i<9)
    {
        while(j<=10)
        {
            if(arr[j]>arr[j+1])// array is not in ascending form then it is descending .?
                j++;
            else
                break;
        }
        if(j<9)
            printf("\nArray is Not Ordered");
        else
            printf("\nArray is Descending Ordered !");
    }

    else
        printf("\n Array is Ascending Ordered");


}
