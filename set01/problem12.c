#include <stdio.h>
struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
 int n;
 n=get_n();
 Complex C[n],sum;
 input_n_complex(n,C);
 sum=add_n_complex(n,C);
 output(n,C,sum);
 return 0;
}
int get_n()
{
 int n;
 printf("Enter size:\n");
 scanf("%d",&n);
 return n;
}
Complex input_complex()
{
 Complex x;
 printf("Enter real and imaginary number:");
 scanf("%f%f",&x.real,&x.imaginary);
 return x;
}

void input_n_complex(int n, Complex c[n])
{
 int i;
 for(i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
Complex add(Complex a, Complex b)
{
 Complex sum;
 sum.real=a.real+b.real;
 sum.imaginary=a.imaginary+b.imaginary;
 return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
 int i;
 Complex sum;
 sum.imaginary=0;
 sum.real=0;
 for(i=0;i<n;i++)
 {
    sum=add(sum,c[i]);
 }
 return sum;
}
void output(int n, Complex c[n], Complex result)
{
int i;
for(i=0;i<n;i++)
{
    printf("%f+i%f +",c[i].real,c[i].imaginary);
}
printf("%f+i%f is %f+i%f",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}