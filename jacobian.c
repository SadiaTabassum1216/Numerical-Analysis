#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 3
#define EPS 1e-9


int main()
{
    double sum;
    int i,j,count=0;
    double a[N][N],b[N],x[3]={0,0,0},x1[3];

    printf("Enter the co effecients:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%lf",&a[i][j]);
            }
    }

    printf("Enter B matrix:\n");
    for(i=0;i<N;i++){
        printf("b[%d]=",i+1);
        scanf("%lf",&b[i]);
        }

    if((a[0][0]<fabs(a[0][1]+a[0][2]))||(a[1][1]<fabs(a[1][0]+a[1][2]))||(a[2][2]<fabs(a[2][0]+a[2][1]))){
        printf("No solution.\n");
        return 0;
    }


    while(1){
        count++;
        for(i=0;i<N;i++){
            sum=b[i];
            for(j=0;j<N;j++){
                if(i!=j)
                    sum=sum-(a[i][j]*x[j]);
            }
            x1[i]=sum/a[i][i];
        }

        if (fabs(x[0]-x1[0])<EPS && fabs(x[1]-x1[1]) < EPS && fabs(x[2]-x1[2])<EPS){
            printf("Solution:\nx: %lf\ny: %lf\nz: %lf\n",x[0],x[1],x[2]);
            printf("\nNo of iteration: %d \n",count);
            exit(0);
        }

        for(i=0;i<N;i++)
            x[i]=x1[i];

        }
    }

