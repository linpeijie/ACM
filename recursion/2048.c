#include<stdio.h>
/*错排问题，或容错问题*/

int main(){
    int c,n,i;
    long long sum=1,result[30]={0,0,1},A[30];

    for(i=1;i<30;i++){
        sum *= i;
        A[i] = sum;
    }

    for(i=3;i<30;i++)
        result[i] = (i-1)*(result[i-1]+result[i-2]);

    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        printf("%.2llf%%\n",result[n]*100.0/A[n]);
    }

    return 0;
}
