#include<stdio.h>
void main()
{
	int a[100],i,n,num,f=0;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("\n Enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number to search:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			
			f=1;break;
		}
	}
	if(f==1)
	{
		printf("\n %d found at %d position ",num,i);
	}
	else
	{
		printf("Number not found");
	}
}
