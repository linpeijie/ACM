#include<stdio.h>
#include<string.h>

int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    int C,N,i,j;
    int t[101][101];
    int dp[101][101];

    scanf("%d",&C);

    while(C--){
        scanf("%d",&N);

        for(i = 1; i <= N; i++)
            for(j = 1; j <= i; j++)
                scanf("%d",&t[i][j]);

        memset(dp,'\0',sizeof(dp));

        for(i = 1; i <= N; i++)
            dp[N][i] = t[N][i];

        for(i = N-1 ; i >= 0; i--)
            for(j = 1; j <= i; j++)
                dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]) + t[i][j];

        printf("%d\n",dp[1][1]);

    }
    return 0;
}

