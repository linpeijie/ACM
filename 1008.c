#include<stdio.h>

/*简单的数组计算问题，关键点在于理解 电梯升降过程中的逻辑
往上升则此次楼层数肯定比上一次的高，只需把当前楼层数减去上次楼层数，求出上升了几层，乘 6 加 5 即可。
往下降则此次楼层数肯定比上一次的低，只需把当前楼层数减去上次楼层数，求出下降了几层，取绝对值后，乘 4 加 5 即可*/

int main(){
    int floor[100],time;
    int N,dif;
    int i;

    while(scanf("%d",&N)!=EOF && N){
        for(i=0;i<N;i++)
            scanf("%d",&floor[i]);

        time = floor[0]*6 + 5;                 //直接求出第一次用时，相当于初始化
        
        for(i=1;i<N;i++){                      
            dif = floor[i] - floor[i-1];       //判断是上升还是下降
            
            if( dif>=0 ){                      //上升计算用时
                time += dif*6 +5;
            }
            else{
                dif = -dif;                    //下降计算用时
                time += dif*4 + 5;
            }
        }

        printf("%d\n",time);
    }


    return 0;
}
