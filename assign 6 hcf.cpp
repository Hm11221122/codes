#include<stdio.h>
int main()
{ int a,b,hcf,g,i;
printf("enter two number:");
scanf("%d%d",&a,&b);
a>b?g=a:g=b;
for(i=1;i<=g;i++)
{
	if(a%i==0 && b%i==0)
	{
		hcf=i;
	}
}
printf("hcf is %d",hcf);
return 0;
}
