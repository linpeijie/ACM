#include<stdio.h>

int main(){
    int N,i,s;
    int station[31];

    
    for(station[1]=4,i=2;i<31;i++)
        station[i] = (station[i-1]-1)*2;

    scanf("%d",&N);

    while(N--){
        scanf("%d",&s);
        printf("%d\n",station[s]);
    }

    return 0;
}
