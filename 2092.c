#include<stdio.h>
#include<math.h>

int main(){
    int n,m;
    int i,flag;

    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0&&m==0)
            break;

        flag = 0;

        for(i=0;i<sqrt(10000);i++){
            if(i*(n-i)==m){
                printf("YES\n");
                flag = 1;
                break;
            }
        }

        if(flag==0)
            printf("NO\n");
    }
    return 0;
}
