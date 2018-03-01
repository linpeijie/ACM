#include<stdio.h>
#include<math.h>
#define PI 3.1415926

int main(){
    int T;
    double x1,y1,x2,y2,angle1,angle2;

    scanf("%d",&T);
    
    while(T--){
        scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

        angle1 = atan2(y1,x1)*180/PI;
        angle2 = atan2(y2,x2)*180/PI;

        if((y1>=0 && y2>=0)||(y1<=0 && y2<=0))
            printf("%.2lf\n",fabs(angle1-angle2));
        else{
            if(angle1+angle2 <= 180)
                printf("%.2lf\n",angle1+angle2);
            else
                printf("%.2lf\n",360-(angle1+angle2));
        }
    }
    return 0;
}
