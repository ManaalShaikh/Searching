#include<stdio.h>
void main()
{
	int a[100],i,n,num,f=0;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered elements are as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
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
