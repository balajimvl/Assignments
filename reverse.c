#include<stdio.h>
int main()
{
  int r=0,n,s;
  printf("Enter the Number\n");
  scanf("%n",&n);
  while(n!=0)
  {
    s=n%10;
    r=r*10+s;
    n=n/10;
  }
  printf("Reverse:%d",r);
  return 0;
}


