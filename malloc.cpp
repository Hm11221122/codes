#include <stdio.h>
#include<stdlib.h>
int main()
{
int *a,b=4,c,i;
a=(int*)calloc(b*sizeof(int));
for(i=0;i<b;i++)
scanf("%d",&a[i]);
for(i=0;i<b+3;i++)
printf("%d \n",a[i]);
free(a);

}
