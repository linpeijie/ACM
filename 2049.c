#include<stdio.h>

int main(){
    int c,m,n,i;
    long long literal[21]={0,0,1},p;

    for(i=3;i<21;i++){
        literal[i] = (i-1)*(literal[i-1] + literal[i-2]);
    }

    scanf("%d",&c);

    while(c--){
        p=1;

        scanf("%d%d",&n,&m);

        for(i=n-m+1;i<=n;i++)
            p *= i;
        for(i=1;i<=m;i++)
            p /= i;

        printf("%lld\n",p*literal[m]);
   }
    return 0;
}
