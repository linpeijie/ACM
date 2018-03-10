/* 题目：给定一个长度为n的数组和一个数s，判断数组中是否存在这样一组子序列，使得子序列中的数相加的和等于s，若有输出Yes，无则输出No，输入0，0结束
算法设计思路：动态规划思想，设数组arr[] = {1,2,3,..,i,...,n}中每一个数为一个阶段对其进行分析，有选和不选两种状态：
           a.选，则s需要减去当前的值arr[i],再对i－1阶段进行判断是否存在和为s的情况，即状态转移方程为 subset(i-1,s-arr[i])
           b.不选，则s保留原来的值，判断i-1阶段是否存在和为s的情况，即 subset(i-1,s),
             并且当arr[i]大于当前s的时候，一定是b情况，一定要优先判断这种情况是否存在
           经过a，b阶段的选择，到了i－1阶段，也需要继续进行a，b两种情况的判断，直到判断结束，而结束条件为
           c.当s＝＝0时，意味着在一系列选择中已经找出了子序列和为s的情况，返回true
           d.当s!=0,i==0时，意味着已经循环到最后一个数，只要这个数等于当前的s，也意味着找到了子序列和为s的情况，返回true
           最后只需要判断a，b两种情况是否存在子序列和等于s即可
递归算法：
1.先对结束条件进行判断
2.再递归判断a，b两种情况
3.只要某一阶段满足true，就返回，结束递归

非递归算法：非递归算法需要用二维数组来保存每个阶段的状态，然后采用自底向上计算方法，最后求得s的状态。类似于斐波那契数列
1.定义一个二维数组用来记录每个阶段的状态（memory）subset［n］[S+1],S即要求的和，这里由于从0开始，所以总数为s＋1个
2.当s==0时，结果一定为true，当i==0时，只有arr[0] == s时才为true,其余为false
3.循环判断1..n阶段，枚举1...s的所有结果，存在与当前s相等的子序列则为true,否则为false
4.显然二维数组subset最后一个位置即为题目所求答案，返回即可
           

*/
#include<stdio.h>
#include<stdbool.h>

bool rec_subset(int arr[],int i,int s){
    if(s == 0)                                          //结束条件c
        return true;
    if(i == 0)                                          //结束条件d
        return arr[0] == s;
    
    if(arr[i] > s)                                      //跳过不符合条件的阶段
        return rec_subset(arr,i-1,s);
    else{                                               //对情况a，b进行计算判断
        bool A = rec_subset(arr,i-1,s-arr[i]);
        bool B = rec_subset(arr,i-1,s);
        return A || B;
    }
}

bool dp_subset(int arr[],int n,int S){
    bool subset[n][S+1];
    int i,j,s;

    for(i = 0; i < n; i++)                              //结束条件a
        subset[i][0] = true;

    for(i = 0,j = 0; j < S+1;j++)                       //结束条件b
        subset[i][j] = false;
    subset[0][arr[0]] = true;

    for(i = 1; i < n; i++)                              //有几个数即有几个阶段
        for(s = 1; s < S+1; s++){                       //枚举每个阶段的结果
            if(arr[i] > s)
                subset[i][s] = subset[i-1][s];          //直接跳过不符合调剂对阶段
            else{
                bool A = subset[i-1][s-arr[i]];         //对情况a,b进行计算判断
                bool B = subset[i-1][s];
                subset[i][s] = A || B;
            }
        }

     return subset[n-1][S];                             
}

int main(){
    int n,s,i;
    int arr[100];

    while(scanf("%d%d",&n,&s),n,s){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        if(dp_subset(arr,n,s))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
