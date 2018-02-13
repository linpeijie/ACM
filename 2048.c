#include<stdio.h>

int main(){
    int c,n,i,sum=1;
    long long result[30]={0,1},A[30];

    for(i=1;i<30;i++){
        sum *= i;
        A[i] = sum;
    }

    for(i=2;i<30;i++)
        result[i] = (i-1)*(result[i-1]+result[i-2]);

    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        printf("%.2f%%\n",result[n]*100.0/A[n]);
    }

    return 0;
}
