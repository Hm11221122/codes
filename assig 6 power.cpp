#include<stdio.h>
#include<math.h>
int main()
{int a=0,x,n,i,b;
printf("Enter a number :");
scanf("%d",&x);
n=x;
while(x!=0)
{b=x%10;
a=a+(pow(b,3));
x=x/10;

}
printf("sum is %d",a);
if(a==n)
printf("Armstrong");
else
printf("not");
}
