#include<stdio.h>
#define f(x) (x*x+1)
#define N 800

int main()
{
    double a=0,b=1,h,x,sum=0;
    h=(b-a)/N;
    int i;

    sum=(f(a)+f(b))/2;

    for(i=1;i<N;i++){
        x=a+i*h;
        sum=sum+f(x);
    }

    sum=sum*h;

    printf("Ans: %.9lf",sum);

return 0;
}
