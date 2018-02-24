#include<stdio.h>
#include<math.h>
/*暴力求解，第二个for再优化也解决不了第一个for费时的问题*/
int main(){
    long long N,M,sum,i,j,length;

    while(scanf("%lld%lld",&N,&M)!=EOF && (N!=0&&M!=0)){
        length = sqrt(2*M);          //用等差数列求和公式，可以知道答案最多个数

        for(i=1;i<=M/3;i++){
            sum = 0;
            
            /*观察答案，可以发现每一次的长度都会比上一次少*/
            for(j=i;j<=i+length;j++){
                sum +=j;

                if(sum > M)
                    break;                

                if(sum == M){
                    length = j-i+1;
                    printf("[%lld,%lld]\n",i,j);
                    break;
                }
            }
        }

        printf("[%lld,%lld]\n\n",M,M);
    }

    return 0;
}
