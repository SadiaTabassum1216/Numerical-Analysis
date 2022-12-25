#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 1.0e-9


double f(double x)
{
    return x*x*x+4*x*x-10;
}


double df(double x)
{
    return 3*x*x+8*x;
}


int main()
{
    int n=0;
    double a=1 ,x0;
    while(1)
    {
        x0=a-(f(a)/df(a));
        n++;

    if(fabs(f(x0)<EPS))
    {
        printf("Root =%.9f\n" , x0);
        printf("Itr = %d\n",n);
        break;
    }
    a=x0;
    }
}
