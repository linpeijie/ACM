/* 汉诺塔问题是经典的递归思想，它将解决问题的所有情况抽象为几个简单的步骤，只要不断重复这些步骤就能解出问题的答案；
   同样的，任何递归问题都可以找到相对应的 递推公式，利用记忆化搜索（动态规划思想）就可以将重叠子问题消除，大大简化计算过程
   所谓的重叠子问题用动态规划思想就是转移的状态。
   
此题思路：问题规定不能直接从最左到最右，或最右到最左，即任何方块必须走中间。
1.当n=1时，需要走2步才能到达最右边，f[1] = 2
2.当n=2时，1需要走两步到最右边，此时2走一步到中间，1走两步到最左边，2走到最右边，1再走回来 f[2] = f[1] + f[1] + f[1] + 2;
3.假设对任意的n-1满足上述条件
4.当n=n时，[n-1]需要走两步到最左边，此时n走一步到中间，[n-1]再走两步到最左边，n走一步到最右边，[n-1]最后走两步到最右边；
  所以对n时，需要走的步数为f[n] = 3*f[n-1] + 2 ，即[n-1]要走三次两步，n走两步
5.终上所述，可求出答案。
*/

#include<stdio.h>

int main(){
    int N,i;
    long long hanoi[36]={0,2};

    for(i = 2; i < 36; i++)
        hanoi[i] = 3*hanoi[i-1] + 2;

    while(scanf("%d",&N)!=EOF)
        printf("%lld\n",hanoi[N]);

    return 0;
}
