#include<stdio.h>

int main(){
    int n,i;
    long long result[50];

    result[1] = 3;
    for(i=2;i<50;i++)
        result[i] = result[i-1]*3-1;

    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",result[n]);
    }

    return 0;
}
