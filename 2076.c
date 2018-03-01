#include<stdio.h>
#include<math.h>

int main(){
    int T;
    int h,m,s;
    double H,M,S,angle;

    while(scanf("%d",&T)!=EOF){
        while(T--){
        scanf("%lf%lf%lf",&h,&m,&s);

        h>=12?(h=h-12):h;

        M = 6*(m+s/60);
        H = 30*(h+(1.0*s/60+m)/60);

        angle = H-M;
            
        if(angle<0)
            angle=-angle;
        if(angle>180)
            angle = 360-angle;
            
        printf("%d\n",(int)angle);
        }
    }
    return 0;
}
