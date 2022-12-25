#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 1e-9

double fx(double x,double y, double z){
    return (-3*y+2*z+85)/15;
}

double fy(double x,double y, double z){
    return (-2*x-z+51)/10;
}

double fz(double x,double y, double z){
    return (-x+2*y+5)/8;
}


int main()
{
    double x0=0,y0=0,z0=0,x1,y1,z1;
    int i,j,count=0;

    while(1){
        x1=fx(x0,y0,z0);
        y1=fy(x0,y0,z0);
        z1=fz(x0,y0,z0);
        count++;

        printf("%.9lf\t%.9lf\t%.9lf\n",x1,y1,z1);

        if (fabs(x0-x1)<EPS && fabs(y0-y1) < EPS && fabs(z0-z1)<EPS){
            printf("x: %lf\ny: %lf\nz: %lf\n",x1,y1,z1);
            printf("\nNo of iteration: %d \n",count);
            exit(0);
        }

        x0=x1;
        y0=y1;
        z0=z1;
    }
}
