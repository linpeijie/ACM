#include<stdio.h>

int main(){
    int n,num;
    int i;

    while(scanf("%d",&n)!=EOF){
        num=1;

        for(i=1;i<n;i++){
            num = (num+1)*2;
        }

        printf("%d\n",num);

    }


    return 0;
}
