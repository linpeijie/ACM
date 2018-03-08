#include<stdio.h>

int main(){
    int n,i,j;
    int flag;
    char c,e;

    flag = 0;
    while(scanf("%d %c %c",&n,&c,&e)!=EOF){
        getchar();

        if(flag)
            printf("\n");

        for(i=0;i<n;i++){
            if(i == 0 || i == n-1)
                printf(" ");
            else
                printf("%c",e);
        }

        for(i = 1; i < n-1; i++){
            printf(" \n"); 

        }

        for(i = 0; i < n; i++){
            if(i == 0 || i == n-1)
                printf(" ");
            else
                printf("%c",e);
        }

        flag = 1;
    }
    return 0;
}
