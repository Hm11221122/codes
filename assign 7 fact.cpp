#include<stdio.h>
int fact(int);
int main()
{int a,c;
scanf("%d",&a);
c=fact(a);
printf("fact is %d",c);
}
int fact(int x)
{int f=1;
while(x!=0)
{
f=f*x;
x--;
}
return f;
}
