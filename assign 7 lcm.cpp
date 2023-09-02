#include<stdio.h>
int lcm(int x,int y);
int main()
{
    int a,b,i,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=lcm(a,b);
    printf("lcm is is %d",c);
}
int lcm(int x,int y)
{
    int i,lcm,j,g;
    x>y?g=x:g=y;
for(i=g;i>=g;i++)
{
	if(i%x==0 && i%y==0)
	{
		lcm=i;
		break;
	}
}
printf("lcm is %d",lcm);
return (lcm);}
