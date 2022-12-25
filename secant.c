#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 10e-9

double f(double x)
{
return x*x*x + 4*x*x-10;
}

int main()
{
    int i=0;
    double a=1,b=2,x0;

    if(f(a)*f(b)>0){
        printf("No root exists.");
        exit(0);
    }

    while(1)
    {
        x0=(a*f(b)-b*f(a))/(f(b)-f(a));
        i++;

    if(fabs(f(x0))<EPS)
        break;

    else{
        a=b;
        b=x0;
        }
    }
    printf("Root = %.9lf\nIteration = %d\n",x0,i);

    return 0;
    }
