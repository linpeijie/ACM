#include<stdio.h>

int main(){
    int N,i;
    long long hanoi[36]={0,2};

    for(i = 2; i < 36; i++)
        hanoi[i] = 3*hanoi[i-1] + 2;

    while(scanf("%d",&N)!=EOF)
        printf("%lld\n",hanoi[N]);

    return 0;
}
