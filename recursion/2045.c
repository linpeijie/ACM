#include<stdio.h>

int main(){
    int N,i;
    long long f[51]={0,3,6,6};

    for(i = 4; i < 51; i++)
        f[i] = f[i-1] + 2*f[i-2];

    while(scanf("%d",&N)!=EOF){
        
        printf("%lld\n",f[N]);

    }
    return 0;
}
