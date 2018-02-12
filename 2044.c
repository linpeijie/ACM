#include<stdio.h>

int main(){
    int N,a,b,i;
    int sum[50];

    sum[0]=1;
    sum[1]=1;
    for(i=1;i<50;i++)
        sum[i] = sum[i-1]+sum[i-2];

    scanf("%d",&N);

    while(N--){
        scanf("%d%d",&a,&b);
        
        printf("%d\n",sum[b-a-1]);
    }

    return 0;
}
