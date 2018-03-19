#include<stdio.h>

int main(){
    int n,num[31]={0,1};
    int i;

    for(i = 2; i < 31; i++)
        num[i] = (num[i-1]+1)*2;

    while(scanf("%d",&n)!=EOF){

        printf("%d\n",num[n]);

    }


    return 0;
}
