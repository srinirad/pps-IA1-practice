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
  return a>b?a>c?a:c:b>a?b>c?b:c:a;
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
