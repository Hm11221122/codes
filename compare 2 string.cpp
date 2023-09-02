#include<stdio.h>
#include<string.h>
int main()
{	int i,value;
	char str[10]="hello",cpy[10]="freinds";
	value=strcmp(str,cpy);
	if (value==0)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
}
