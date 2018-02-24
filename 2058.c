#include<stdio.h>

int main(){
    long long N,M,sum,i,j,first,last;

    while(scanf("%lld%lld",&N,&M)!=EOF && (N!=0&&M!=0)){

        for(i=1;i<=M/2;i++){
            sum = 0;
            
            for(j=i;j<=M/2;j++){
                sum +=j;
                if(sum == M){
                    printf("[%lld,%lld]\n",i,j);
                    break;
                }
            }
        }

        printf("[%lld,%lld]\n",M,M);
    }

    return 0;
}
