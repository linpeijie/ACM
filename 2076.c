#include<stdio.h>
#include<math.h>

int main(){
    int T;
    int h,m,s;
    int H,M,S,angle;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d%d",&h,&m,&s);

        h>=12?(h=h-12):h;

        M = 6*m+6.0/60*s;
        H = 30*(h+(1.0*s/60+m)/60);

        angle = (abs(H-M)>180)?360-abs(H-M):abs(H-M);

        printf("%d\n",angle);
    }
    return 0;
}
