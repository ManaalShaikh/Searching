#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[100],i,n,f=0,num;
	printf("Enter limit:");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		a[i]=rand()%100;
	printf("\n Random number:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	printf("\n Enter the element to be searched:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
			f=1;
			break;
		}
	}
	if(f)
	printf("%d found in the array list",num);
	if(!f)
	printf("%d not found in the array list",num);

}
