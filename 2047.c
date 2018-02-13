#include<stdio.h>

int main(){
    int n,i;
    long long result[50]={0,3,8};

    for(i=3;i<50;i++)
        result[i] = 2*(result[i-1]+result[i-2]);

    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",result[n]);
    }

    return 0;
}
