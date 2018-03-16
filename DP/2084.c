/* 经典DP入门问题，求数塔的路径最大和
算法设计思想： 动态规划一般是自顶向下分析，自底向上计算，运用到 记忆化搜索 思想。
1.对于每层的每个结点，有左右两种选择，即选左能得到最大还是选右能得到最大，F[i][j] = max{F[i+1][j],F[i+1][j+1]} ＋ arr[i][j],
  F[i][j]表示当前结点，i表示层，j表示当前层的第几个结点
2.显然递推结束条件为当 i ＝＝ n时
3.求出状态转移方程后，用 备忘录 dp[i][j]记录每层每个结点能选择的最大和，即记录下子最优解
4.则显然 dp[1][1]第一层一个结点的值就是答案

*/

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

