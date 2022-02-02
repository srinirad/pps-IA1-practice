#include <stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a<=b)
  {
    if(b<=c)
      return b;
    else
      return c;
  }
  else if(b<=a)
  {
    if(a>=c)
      return a;
    else
      return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("the largest number of %d %d and %d is %d\n",a,b,c,largest);
}
int main()
{
  int a=input();
  int b=input();
  int c=input();
  int largest=cmp(a,b,c);
  output(a,b,c,largest);
}
