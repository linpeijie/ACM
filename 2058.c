#include<stdio.h>

int main(){
    long long N,M,sum,i,j,length;

    while(scanf("%lld%lld",&N,&M)!=EOF && (N!=0&&M!=0)){
        length = M/2;

        for(i=1;i<=M/2;i++){
            sum = 0;
            
            for(j=i;j<=i+length;j++){
                sum +=j;
                if(sum>M)
                    break;

                if(sum == M){
                    length = j-i+1;
                    printf("[%lld,%lld]\n",i,j);
                    break;
                }
            }
        }

        printf("[%lld,%lld]\n\n",M,M);
    }

    return 0;
}
