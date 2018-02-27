#include<stdio.h>

int main(){
    int T,A,B;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d",&A,&B);
        printf("%d\n",(A%100+B%100)%100);
    }
    return 0;
}
