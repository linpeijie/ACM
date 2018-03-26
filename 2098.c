#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,count;
    int prime[10005];
    
    memset(prime,1,sizeof(prime));
    prime[0] = 0;
    prime[1] = 0;

    for(i = 2; i < 10005; i++)
        if(prime[i])
            for(j = 2*i; j < 10005; j += i)
                prime[j] = 0;

    while(scanf("%d",&n)!=EOF,n){
        count = 0;

        for(i=1;i<n/2;i+=2){
            if(prime[i] && prime[n-i])
                count++;
        }

        printf("%d\n",count);
    }
    return 0;
}
