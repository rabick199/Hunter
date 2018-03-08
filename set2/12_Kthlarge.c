#include<stdio.h>
void main()
{
	int n,a[100],i,j,k,t;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("Enter the K:");
	scanf("%d",&k);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;	
			}
		}
	}
	printf("\n The %dth largest number:%d",k,a[n-k]);
}
