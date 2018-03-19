#include<stdio.h>

int main(){
    int n,i;
    long long f[1001]={1,2},g[1001]={0,2};

    for(i = 2; i < 1001; i++)
        g[i] = g[i-1] + i;

    for(i = 2; i < 1001; i++)
        f[i] = f[i-1] + g[i-1];

    while(scanf("%d",&n)!=EOF)
        printf("%lld\n",f[n]);

    return 0;
}
