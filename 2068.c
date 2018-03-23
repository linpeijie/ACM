#include<stdio.h>

int main(){
    int n,i;
    long long f[26]={0,0,1};

    for(i = 3; i < 26; i++)
        f[i] = (i-1)*(f[i-2]+f[i-1]);

    while(scanf("%d",&n),n){
        if(n == 1)
            printf("1\n");
        else
            printf("%lld\n",f[n]-f[n/2]);
    }
    return 0;
}
