#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 1e-9

double fx(double x,double y, double z){
   // return (-3*y+2*z+85)/15;
   return (8-2*y+2*z)/8;
}

double fy(double x,double y, double z){
  //  return (-2*x-z+51)/10;
  return (4+x+3*z)/8;
}

double fz(double x,double y, double z){
   // return (-x+2*y+5)/8;
   return (12-2*x-y)/9;
}


int main()
{
    double x0=0,y0=0,z0=0,x1,y1,z1;
    int i,j,count=0;

    while(1){
        x1=fx(x0,y0,z0);
        y1=fy(x1,y0,z0);
        z1=fz(x1,y1,z0);
        count++;

        printf("%lf\t%lf\t%lf\n",x1,y1,z1);

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
