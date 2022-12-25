#include<stdio.h>
#include <math.h>
#define N 200

double func(double x)
{
return x*x*x+4*x*x-10;
}

double Dfunc(double x)
{
return 3*x*x+8*x;
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
    printf("%.9lf\t%.9lf\t%.9lf\t%.9lf\n",x[0],f[0],Df[0],Dfunc(x[0]));

//central
    for(i=1;i<N;i++){
        Df[i]=(f[i+1]-f[i-1])/(2*h);
        printf("%.9lf\t%.9lf\t%.9lf\t%.9lf\n",x[i],f[i],Df[i],Dfunc(x[i]));
    }

//backward
    Df[N]=(f[N]-f[N-1])/h;
    printf("%.9lf\t%.9lf\t%.9lf\t%.9lf\n",x[N],f[N],Df[N],Dfunc(x[N]));


  double max=0;
    for(i=0;i<=N;i++){
        if(fabs(Dfunc(x[i])-Df[i])>max)
            max=Dfunc(x[i])-Df[i];
    }

    printf("Max=%lf\n",max);
}
