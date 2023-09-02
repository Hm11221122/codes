#include<stdio.h>
int main()
{int l,arr[100],j,n,i,c;
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
	l=n-1;
	for(i=0,j=l;i<(n/2);i++,j--)
	{c=arr[i];
	arr[i]=arr[j];
	arr[j]=c;
		
	}
	printf("reverse array is");
	for(i=0;i<n;i++)
	{printf("%d ",arr[i]);
	}
}
