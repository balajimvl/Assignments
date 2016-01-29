#include <stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/2;
        i++;
    }
    printf("the count is %d",i);
    return 0;
}
