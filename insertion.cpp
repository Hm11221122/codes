#include<stdio.h>
int main()
{

int l,arr[100],j,n,i,c,pos,v;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{scanf("%d",&arr[i]);
	}
	printf("Original array is");
	for(i=0;i<n;i++)
	{printf("%d ",arr[i]);
	}
	printf("Enter the value you want to insert:");
	scanf("%d",&v);
	printf("Enter its position:");
	scanf("%d",&pos);
	
	for(i=n;i>=pos;i--)
	{arr[i]=arr[i-1];
	}
	arr[pos-1]=v;
		n=n+1;
		printf("New array is");
	for(i=0;i<n;i++)
	{printf("%d ",arr[i]);
	}
	}
	
