#include<stdio.h>

int main(){
    int i,n,c;
    long long sum;

    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        sum=1;
        for(i=1;i<2*n;i++)
            sum += i;

        printf("%d\n",sum);
    }

    return 0;
}
