#include<stdio.h>

long long hanoi(int n){
    if(n==1)
        return 1;
    else
        return hanoi(n-1)*2+1;
}

int main(){
    int T,N,k;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d",&N,&k);
        printf("%lld\n",hanoi(N-k)+1);
    }
    return 0;
}
