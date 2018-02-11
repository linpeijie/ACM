#include<stdio.h>

int main(){
    int N,M;
    int v[41];
    int i;
    

    for(v[1]=0,i=2;i<41;i++){
        v[i] = v[i-1]+1;
    }


    scanf("%d",&N);
    while(N--){
        scanf("%d",&M);

        printf("%d\n",v[M]);
    }

    return 0;
}
