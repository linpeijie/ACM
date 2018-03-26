#include<stdio.h>
#include<string.h>

int main(){
    long long i,n,N[1000005],s;
    
    while(scanf("%lld",&n),n){
        memset(N,0,sizeof(N));

        for(i = 0; i < n; i++){
            scanf("%lld",&s);
            N[s]++;
        }

        for(i = 0; i <= 1000005; i++)
            if(N[i] == 1)
                printf("%lld\n",i);
    }
    return 0;
}
