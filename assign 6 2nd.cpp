#include<stdio.h>
int main()
{int i,h=0,t,a,b,c=1;
printf("enter a number");
scanf("%d",&a);
for(i=2;i<a;i++)
{if(a%i==0)
{
h++;
}
}
if(h==0)
	printf("prime");
else
printf("not prime");}
