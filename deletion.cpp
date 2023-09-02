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
	printf("Enter the value you want to delete:");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{if(arr[i]==v)
	break;
	}c=i;
	for(;i<n;i++)
	{arr[i]=arr[i+1];
	}
	if(n!=c+1)
	{arr[n-1]=arr[n-2];
	}
		printf("New array is");
	for(i=0;i<n;i++)
	{printf("%d ",arr[i]);
	}
	}
	
