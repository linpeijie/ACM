#include<stdio.h>
#include<math.h>


int main(){
    long long N,M,n,a1;

    while(scanf("%lld%lld",&N,&M)!=EOF && (N!=0&&M!=0)){
        n = sqrt(2*M);

        for(;n>0;n--){
             a1 = ((2.0*M-n*(n-1))/n)/2.0;
             if(M == a1*n + n*(n-1)/2)
                 printf("[%lld,%lld]\n",a1,a1+n-1);
        }
        printf("\n");
    }

    return 0;
}
