#include<stdio.h>
#include<math.h>

int main(){
    int j,i,M,N,x[501];
    int min,time;

    scanf("%d",&M);
    while(M--){
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%d",&x[i]);

        min = 0;
        time = 0;
        for(j=0,i=0;j<N;j++)
            min += abs(x[j]-x[i]);
        
        for(i=1;i<N;i++){
            time = 0;
            for(j=0;j<N;j++)
                time += abs(x[j]-x[i]);
            if(time < min)
                min = time;
        }
        printf("%d\n",min);
    }
    return 0;
}
