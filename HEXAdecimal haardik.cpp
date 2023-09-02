//enter any number and convert into binary
//octal
//hexa decimal
//enter any number and diplay it in words

#include<stdio.h>    
#include<stdlib.h>  
int main()
{
    int a[100], i=0,n,t;
    printf("Enter any number");
    scanf("%d",&n);
  for(t=n;t>0;t/=16)
    {
       a[i]=t % 16;
        i++;
    }
    for(i--;i>=0;i--)
{
        switch(a[i])
        {
            case 10:
            printf("A\t");
            break;
            case 11:
            printf("b\t");
            break;
            case 12:
           printf("c\t");
            break;
            case 13:
            printf("d\t");
            break;
            case 14:
            printf("e\t");
            break;
            case 15:
            printf("f\t");
            default:          printf("%d\t",a[i]);
            break;   }    }}
