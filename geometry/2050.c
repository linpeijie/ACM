#include<stdio.h>

int main(){
    int i,n,c;
    long long plNum[10001]={1,2};

    for(i = 2; i < 10001; i++)
        plNum[i] = plNum[i-1] + 4*(i-1) + 2 -1;

    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);

        printf("%lld\n",plNum[n]);
    }

    return 0;
}
