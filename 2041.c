#include<stdio.h>

int main(){
    int N,M;
    int v[41];
    int i;
    

    for(v[0]=1,v[1]=1,i=2;i<41;i++){
        v[i] = v[i-1]+v[i-2];
    }


    scanf("%d",&N);
    while(N--){
        scanf("%d",&M);

        printf("%d\n",v[M-1]);
    }

    return 0;
}
