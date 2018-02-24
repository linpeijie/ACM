#include<stdio.h>
#include<math.h>
/*利用等差数列求和公式，先求出答案最大长度，然后再求出首项a1，最后反通过 首项a1和长度n求出末项an
最后通过公式 Sn = n(a1+an)/2 输出答案 ； an = a1+(n-1)d
*/

int main(){
    long long N,M,n,a1;

    while(scanf("%lld%lld",&N,&M)!=EOF && (N!=0&&M!=0)){
        n = sqrt(2*M);

        for(;n>0;n--){
             a1 = ((2.0*M-n*(n-1))/n)/2.0;
             if(M == a1*n + n*(n-1)/2)
                 printf("[%lld,%lld]\n",a1,a1+n-1);
        }
        printf("\n");
    }

    return 0;
}
