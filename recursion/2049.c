#include<stdio.h>

/* 排列组合 ＋ 错排
算法设计：1.先用排列组合算法求出n－m个找对新娘的组合数量
        2.再用错排公式求出m个找错新娘的组合数量
        3.将1，2相乘即为答案
*/
int main(){
    int c,m,n,i;
    long long literal[21]={0,0,1},p;

    for(i=3;i<21;i++){
        literal[i] = (i-1)*(literal[i-1] + literal[i-2]);
    }

    scanf("%d",&c);

    while(c--){
        p=1;

        scanf("%d%d",&n,&m);

        for(i=n-m+1;i<=n;i++)
            p *= i;
        for(i=1;i<=m;i++)
            p /= i;

        printf("%lld\n",p*literal[m]);
   }
    return 0;
}
