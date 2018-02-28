#include<stdio.h>

int isHave(long long n){
    /*If has 4 or 62,return 1;
      else,return 0;
    */
    if((n%10==4|| n%100==62) && n>0)
        return 1;
    if(n==0)
        return 0;

    isHave(n/10);
}

int main(){
    long long n,m,i,count;
    int license[1000005]={0};

    for(i=1;i<1000000;i++){
        if(isHave(i))
            license[i] = 1;
    }

    while(scanf("%lld%lld",&n,&m),n,m){
        count = 0;
        for(i=n;i<=m;i++)
            if(license[i]!=1)
                count++;

        printf("%lld\n",count);
    }


    return 0;
}
