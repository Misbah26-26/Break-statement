#include <stdio.h>

int main()
{
	int i;
	printf("ENTER ANY NUMBER: ");
	scanf("%d",&i);
	
	for(i=0;i<=10;i++)
	{
		printf("\n\t\tHello Welcome !!");
			if(i==5)
			break;
		printf("\n\t\tHAVE A NICE DAY.");
		printf("\n\t\t----------------");
	}
	return 0;
}
