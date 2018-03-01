#include<stdio.h>

int main(){
    long long A,B;
    int T;
    
    scanf("%d",&T);

    while(T--){
        scanf("%lld%lld",&A,&B);
        if(A%B == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
