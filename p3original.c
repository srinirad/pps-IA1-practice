#include <stdio.h>
int input_n()
{
  int a;
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
     sum=sum+i;
  return sum;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
     printf("%d+",i);
  printf("%d=%d",n,sum);
}
int main()
{
  printf("enter the limit\n");
  int n=input_n();
  int sum=sum_n(n);
  output(n,sum);
}

