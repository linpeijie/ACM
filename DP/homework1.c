/* 题目：从长度为n的数列中选出任意数，使这些数加起来的和最大，要求：不能选择相邻的两个数！(如 1 2 3 4，选了1就不能选2，选了3就不能选2和4)
算法设计思路：运用DP思想，先找出题目的特征，找出其重叠子问题，求出状态转移方程(递推式)，其中很关键的一点是分析每个子阶段的最优解状态
1.自顶向下分析：每个数都有选和不选两种状态:
    a.选择i，则其最优解为 opt[i-2] + arr[i] ，即i的值加上它能选择的下个数的最优解,因为i-1不能选，所以只能选择i-2;
    b.不选i,则可以选择第i-1个数，即 opt[i-1]
  由此可以得出，对于i来说，其最优解为两种状态下值最大的情况，即 max{opt[i-2]+arr[i] , opt[i-1]} 。
2.由1可知，第i-1个，第i-2个的最优解也可依次得出
3.自底向上计算：因为当 i=0时,opt[0] = arr[0],即第一个数只有他自身这种选择；当 i=1时，opt[1] = max{arr[0],arr[1]}，即从两个数中选最大的一个。
  且i=0,i=1也是状态转移方程起点。
4.由此可得出状态转移方程为:opt[i]  =  max{opt[i-2]+arr[i] , opt[i-1]}
  其中i表示一共有多少个数,opt[n-1]即为答案

线性动态规划问题
*/
#include<stdio.h>

int max(int a,int b){
    if(a > b)
        return a;
    else
        return b;
}
//递归解法
int rec_opt(int arr[],int i){
    int A,B;

    if(i==0)
        return arr[0];
    else if(i==1)
        return max(arr[0],arr[1]);
    else{
        A = rec_opt(arr,i-2)+arr[i];
        B = rec_opt(arr,i-1);
        return max(A,B);    
    }
}
//非递归解法
int dp_opt(int arr[],int n){
    int opt[n],i,A,B;

    opt[0] = arr[0];
    opt[1] = max(arr[0],arr[1]);

    for(i=2;i<n;i++){
        A = opt[i-2]+arr[i];
        B = opt[i-1];
        opt[i] = max(A,B);
    }
    
    return opt[n-1];
}

int main(){
    int arr[100];
    int n,i,max,num;

    while(scanf("%d",&n),n){
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        max = dp_opt(arr,n);

        printf("%d\n",max);
    }
    return 0;
}
