#include<stdio.h>
#include<stdlib.h>
void main()
{
	int times;
	printf("\n Enter No of times to Beep :");
	scanf("%d",&times);
	while(times!=0)
	{
		printf("\a");
		times--;
	}
}

