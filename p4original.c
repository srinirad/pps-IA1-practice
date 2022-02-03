#include <stdio.h>
int input_array_size()
{
  int a;
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  for(int i=0;i<n-1;i++)
     printf("%d+",a[i]);
  printf("%d=%d",a[n-1],sum);
}
int main()
{
  printf("enter the array size\n");
  int n=input_array_size();
  int a[n];
  printf("enter the array\n");
  input_array(n,a);
  int sum=sum_n_arrays(n,a);
  out_put(n, a, sum);
}