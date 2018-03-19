#include<stdio.h>

int main(){
    int C,n,i,j;
    long long f[25][25],sum;

    for(i = 1; i < 25; i++){
        f[i][1] = 1;
        for(j = 2; j < 25; j++)
            if(i == j)
                f[i][j] = 1;
    }

    for(i = 3; i < 25; i++)
        for(j = 2; j < i; j++)
            f[i][j] = f[i-1][j-1] + j*f[i-1][j];
    
    scanf("%d",&C);

    while(C--){
        sum = 0;
        scanf("%d",&n);

        for(i = 1; i <= n; i++)
            sum += f[n][i];

        printf("%lld\n",sum);
    }
    return 0;
}
