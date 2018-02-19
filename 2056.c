#include<stdio.h>

int change(double* a,double* b){
    double t;

    if((*a)>(*b)){
        t = (*a);
        (*a) = (*b);
        (*b) = t;
    }

    return 0;
}

double max(double a,double b){
    if(a>b)
        return a;
    else
        return b;
}

double min(double a,double b){
    if(a<b)
        return a;
    else
        return b;
}

int main(){
    double x1,x2,x3,x4,y1,y2,y3,y4;

    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
        change(&x1,&x2);
        change(&y1,&y2);
        change(&x3,&x4);
        change(&y3,&y4);

        x1=max(x1,x3);
        y1=max(y1,y3);
        x2=min(x2,x4);
        y2=min(y2,y4);

        printf("%.2lf\n",(x1>x2 || y1>y2)?0:(x2-x1)*(y2-y1));         
    }

    return 0;
}
