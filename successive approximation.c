#include<stdio.h>
#include<math.h>
#define EPS 10e-3
#define f(x) (x*x*x-2*x-3)
#define g(x) cbrt(2*x+3)

//#define f(x) (x*x*x+4*x*x-10)
//#define g(x) sqrt(-x*x*x+10)

int main()
{
    int n=0;
    double x0=1, xn;

    while(1){
        xn=g(x0);
        n++;
       // printf("%.9lf\n",xn);
        if(fabs(xn-x0)<EPS){
            printf("Root: %.9lf\nIteration: %d\n",xn,n);
            return 0;
            }

        x0=xn;
        }
}
