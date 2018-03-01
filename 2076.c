#include<stdio.h>
#include<math.h>

int main(){
    int T;
    int h,m,s;
    double H,M,S,angle;

    while(scanf("%d",&T)!=EOF){
        while(T--){
        scanf("%d%d%d",&h,&m,&s);

        h>=12?(h=h-12):h;                //换成12小时制

        M = 6*(m+1.0*s/60);              //分别计算时针和分针与12原点的夹角
        H = 30*(h+(1.0*s/60+m)/60);

        angle = fabs(H-M);
            
        if(angle>180)                     //选用合格的夹角
            angle = 360-angle;
            
        printf("%d\n",(int)angle);
        }
    }
    return 0;
}
