#include<stdio.h>

int main(){
    int n,i;
    long long high = 1,low=0,preh,prel;

    while(scanf("%d",&n)!=EOF && n!=-1){
        high = 1;
        low = 0;

        for(i=1;i<=n;i++){
            preh = high;
            prel = low;

            high = 3*preh + 2*prel ;
            low = preh + prel ;
        }

        printf("%lld,%lld\n",high,low);
    }
    return 0;
}
