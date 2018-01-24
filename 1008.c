#include<stdio.h>

int main(){
    int floor[100],time;
    int N,dif;
    int i;

    while(scanf("%d",&N)!=EOF && N){
        for(i=0;i<N;i++)
            scanf("%d",&floor[i]);

        time = 0;
        time = floor[0]*6 + 5;
        for(i=1;i<N;i++){
            dif = floor[i] - floor[i-1];
            if( dif>=0 ){
                time += dif*6 +5;
            }
            else{
                dif = -dif;
                time += dif*4 + 5;
            }
        }

        printf("%d\n",time);
    }


    return 0;
}
