#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,base,a[20],i=0,j;
	printf("Enter the n and base:");
	scanf("%d%d",&n,&base);
	x=n;
	while(n>0)
	{
		a[i]=n%base;
		if(a[i]>=10)
		{
			a[i]=a[i]+55;
		}
		else
		{
			a[i]=a[i]+'0';
		}
		n=n/base;
		i++;
	}
	printf("\nThe binary form of a number %d in base %d is ",x,base);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	return 0;
}
