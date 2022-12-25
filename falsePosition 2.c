#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(X) (X*X*X+4*X*X-10)
#define EPS 10e-9

int main()
{
    int n=0;
    double a=1,b=2,x0;

    if(f(a)*f(b)>0){
        printf("No root exists.");
        exit(0);
    }


    while(fabs(f(x0))>EPS){
        x0=(a*f(b)-b*f(a))/(f(b)-f(a));
        n++;

        if(f(a)*f(x0)<0)
            b=x0;
        else
            a=x0;
    }
    printf("Root: %.9lf\nIterantion: %d\n",x0,n);
    return 0;
}
