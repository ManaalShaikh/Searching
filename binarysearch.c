#include<stdio.h>
void main()
{
	int a[100],i,n,num,f=0,top,bottom,mid;
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
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(a[mid]==num)
		{
			f=1;
			break;
		}
		if(num>a[mid])
		{
			top=mid+1;
		}
		else
		{
			bottom=mid-1;
		}
	}
	if(f)
	printf("%d found in the array list",num);
	if(!f)
	printf("%d not found in the array list",num);

}
