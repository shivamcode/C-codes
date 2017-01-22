#include<stdio.h>
void main()
{
	int no,i=1;
	printf("\n Enter Number :");
	scanf("%d",&no);
	while(i<=10)
	{
		printf("%4d",no*i);
		i++;
	}
	printf("\n");
}
