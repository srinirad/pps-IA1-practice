#include <stdio.h>
struct _complex
{
float real,imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
  Complex a;
  printf("enter the complex numbers in format a+bi\n");
  scanf("%f %*c %f %*c",&a.real,&a.imaginary);
  return a;
}
Complex add(Complex a, Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a, Complex b, Complex c)
{
  printf("(%f+%fi)+(%f+%fi)=(%f+%fi)",a.real,b.imaginary,b.real,a.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a=input_complex();
  Complex b=input_complex();
  Complex c=add(a,b);
  output(a,b,c);
}
