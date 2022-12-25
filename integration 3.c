#include<stdio.h>
#include<math.h>
#define f(x) 2*fabs(sin(x))
#define N 300

int main()
{
    double a=0,b=3.1416*2,h,x,sum=0,ans;
    h=(b-a)/N;
    int i;

    for(i=1;i<N;i++){
        x=a+i*h; //x=x+h;
        if(i%2==0)
            sum=sum+2*f(x);
        else
            sum=sum+4*f(x);
    }

    sum=sum+f(a)+f(b);
    ans=sum*h/3;

    printf("Ans: %lf",ans);

return 0;
}
