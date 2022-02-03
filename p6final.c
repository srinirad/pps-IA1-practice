#include <stdio.h>
void input_two_string(char *a, char *b)
{
   printf("enter the two strings\n");
   scanf("%s",a);
   scanf("%s",b);
}
int strcmp(char *a, char *b)
{
  int z=0,w=0;
  for(int i=0;a[i]!='\0'|| b[i]!='\0';i++)
  {
    if(a[i]==b[i])
    {
      z++;
      w++;
    }
    else if(a[i]>b[i])
      z++;
    else
      w++;
  }
  if(z>w)
   return 1;
  else if(z==w)
   return 0;
  else 
   return -1;
  
}
void output(char *a, char *b, int result)
{
  if(result<0)
    printf("%s is greater than %s",b,a);
  else if(result>0)
    printf("%s is greater than %s",a,b);
  else
    printf("%s is equal to %s",a,b);
}
int main()
{
  char a[20],b[20];
  input_two_string(a,b);
  output(a,b,strcmp(a,b));
}
