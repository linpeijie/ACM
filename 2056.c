#include<stdio.h>
/*该题可用  “作图”  思想来解题：
1.先分别作出两个矩形的图形，思路是将输入的数据作规范，找出左下角和右上角的点，此即构成一个图形。
2.思考重叠图形即所求面积的特征，找出特征方程，观察可以发现重叠面积也是一个矩形，且其左下角的顶点为两个大矩形左下角顶点较大点（或较小点），右上角顶点同理。
3.继续作图，作出重叠图形，求出其对角线的顶点。
4.必须判断两个矩形是否重叠，是的话即可求出答案。
*/
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
        /*画出两个大矩形的对角顶点*/
        change(&x1,&x2);
        change(&y1,&y2);
        change(&x3,&x4);
        change(&y3,&y4);

        /*画出重叠矩形的对角顶点*/
        x1=max(x1,x3);
        y1=max(y1,y3);
        x2=min(x2,x4);
        y2=min(y2,y4);

        /*判断两个大矩形是否重叠，是的话输出面积，否的话输出0*/
        printf("%.2lf\n",(x1>x2 || y1>y2)?0:(x2-x1)*(y2-y1));         
    }

    return 0;
}
