#include<stdio.h>

int main(){
    int T,N;
    double h,max;

    scanf("%d",&T);

    while(T--){
        max = 0;
        scanf("%d",&N);
        while(N--){
            scanf("%lf",&h);
            if(h>max)
                max = h;
        }
        printf("%.2lf\n",max);
    }
    return 0;
}
