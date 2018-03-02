#include<stdio.h>

int main(){
    int N,i;
    long long f[51]={0,1,1};

    for(i=2;i<51;i++)
        f[i] = f[i-1]+f[i-2];

    while(scanf("%d",&N) && N!=-1){
        printf("%lld\n",f[N]);
    }
    return 0;
}
