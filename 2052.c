#include<stdio.h>

int main(){
    int n,m;
    int i,j;

    while(scanf("%d%d",&n,&m)!=EOF){
        for(i=0;i<=n+1;i++){
            if(i==0)
                printf("+");
            else if(i == n+1)
                printf("+\n");
            else
                printf("-");
        }

        for(j=0;j<m;j++){
            printf("|");
            for(i=0;i<n;i++)
                printf(" ");
            printf("|\n");
        }

        for(i=0;i<=n+1;i++){
            if(i==0)
                printf("+");
            else if(i == n+1)
                printf("+\n");
            else
                printf("-");
        }
        printf("\n");
    }

    return 0;
}
