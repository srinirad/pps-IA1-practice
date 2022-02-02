#include <stdio.h>
struct _complex
{
float real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int a;
  scanf("%d",&a);
  return a;
}
void input_n_complex(int n, Complex c[n])
{
  Complex a;
  printf("enter the complex numbers in format a+bi\n");
  for(int i=0;i<n;i++)
  scanf("%f %*c %f %*c",&c[i].real,&c[i].imaginary);
}
Complex add(Complex a, Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
Complex add_n_complex(int n,Complex c[n])
{
  Complex sum;
  sum.real=0;sum.imaginary=0;
  for(int i=0;i<n;i++)
  {
    sum=add(c[i],sum);
  }
  return sum;
}
void output(int n, Complex c[n], Complex result)
{
  for(int i=0;i<n-1;i++)
  {
    printf("(%f+%fi)+",c[i].real,c[i].imaginary);
  }
  printf("(%f+%fi)=(%f+%fi)",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}
int main()
{
  printf("enter the limit\n");
  int n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  Complex result=add_n_complex(n,c);
  printf("%f%f",result.real,result.imaginary);
  output(n,c,result);
}
