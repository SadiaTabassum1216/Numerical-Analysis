#include<stdio.h>
#define f(x) (x*x+1)
#define N 200

int main()
{
    double a=0,b=1,h,x,odd=0,even=0,sum,ans;
    h=(b-a)/N;
    int i;

    for(i=1;i<N;i+=2){
        x=a+i*h;
        odd=odd+f(x);
    }
    for(i=2;i<N;i+=2){
        x=a+i*h;
        even=even+f(x);
    }

    odd=odd*4;
    even=even*2;
    sum=odd+even+f(a)+f(b);
    ans=sum*h/3;

    printf("Ans: %lf",ans);
    return 0;
}
