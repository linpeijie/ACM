#include<stdio.h>

int main(){
    int T,n,i;
    int sum=1;

    while(scanf("%d",&T)!=EOF){
        sum = 1;

        for(i=0;i<T;i++){
            scanf("%d",&n);
            if(n%2!=0)
              sum *=n;  
        }

        printf("%d\n",sum);

    }

    return 0;
}
