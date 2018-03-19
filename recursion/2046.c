#include<stdio.h>

int main(){
    int n,i;
    long long f[51]={1,1,2};

    for(i = 3; i < 51; i++)
        f[i] = f[i-1] + f[i-2];

    while(scanf("%d",&n)!=EOF)
        printf("%lld\n",f[n]);

    return 0;
}
