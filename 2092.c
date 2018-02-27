#include<stdio.h>
#include<math.h>

int main(){
    int n,m;
    int i,flag;

    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0&&m==0)
            break;

        flag = 0;

        for(i=-9999;i<10000;i++){
            if(i*(n-i)==m){
                printf("Yes\n");
                flag = 1;
                break;
            }
        }

        if(flag==0)
            printf("No\n");
    }
    return 0;
}
