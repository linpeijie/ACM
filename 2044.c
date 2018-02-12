#include<stdio.h>

int main(){
    int N,a,b,i;
    long long sum[50];

    sum[0]=1;
    sum[1]=1;
    for(i=2;i<55;i++)
        sum[i] = sum[i-1]+sum[i-2];

    scanf("%d",&N);

    while(N--){
        scanf("%d%d",&a,&b);
        
        printf("%lld\n",sum[b-a]);
    }

    return 0;
}
