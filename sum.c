#include <stdio.h>
int add(int a,int b,int c)
{
    int d;
    d=a+b+c;
    return d;
}

int main()
{
    int a,b,c,d,a[10],sum=0,i,f;
    printf("\nEnter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nsum=%d",a+b+c);
    printf("\nUsing arrays");
    printf("\nEnter three numbers");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("\nsum using array=%d",sum);
    printf("\nusing functions:");
    f=add(a,b,c);
    printf("\nsum using function=%d",f);
    return 0;
}
