#include<stdio.h>
#include<math.h>

int fp(long long m,long long n) {
    /*Fase Power*/
    int r = 1,base = m;
    while(n) {
        if(n&1)
            r = (r*base)%100;
        base = (base*base)%100;
        n>>=1;
    }
    return r%100;
}

int main(){
    long long T,i;
    long long n;

    while(scanf("%lld",&T),T) {
        for(i = 1; i <= T; i++) {
            scanf("%lld",&n);
            printf("Case %lld: %d\n",i,(fp(4,n-1)+fp(2,n-1))%100);
        }
        printf("\n");    
    }
    
    return 0;
}
