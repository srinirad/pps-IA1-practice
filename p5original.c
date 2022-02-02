#include <stdio.h>
float input()
{
  float a;
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  float x=0.5*(2+n/2);
  float a=x+1;
  while(a-x>0.00001)
  {
    a=x;
    x=0.5*(x+n/x);
  }
  return x;
}
void output(float n, float sqrt_result)
{
  printf("Square root of %f is %f",n,sqrt_result);
}
int main()
{
  printf("enter the number\n");
  float n=input();
  output(n,my_sqrt(n));
}
