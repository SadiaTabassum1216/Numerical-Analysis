#include<stdio.h>
#include <math.h>
#define N 200

double func(double x)
{
return x*x*x+4*x*x-10;
}


int main()
{
    double a=0,b=10;
    int i;
    double h=(b-a)/N;
    double x[N+1],f[N+1],Df[N+1];

    x[0]=a;
    f[0]=func(a);


    for(i=1;i<N;i++){
        x[i]=x[i-1]+h;
        f[i]=func(x[i]);
        }

    x[N]=b;
    f[N]=func(b);

//forward
    Df[0]=(f[1]-f[0])/h;

//central
    for(i=1;i<N;i++){
        Df[i]=(f[i+1]-f[i-1])/(2*h);
    }

//backward
    Df[N]=(f[N]-f[N-1])/h;

    printf("Ans: %.9lf",Df[N]);

}
