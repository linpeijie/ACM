#include<stdio.h>

int main(){
    int n[101];
    int i,m,min,flag,index;

    while(scanf("%d",&m)!=EOF && m!=0){

        for(i=0;i<m;i++)
            scanf("%d",&n[i]);

        min = n[0];
        flag = 0;

        for(i=0;i<m;i++){
            if(n[i]<min){
                min = n[i];
                flag = i;
            }
        }

        index = n[0];
        n[0] = n[flag];
        n[flag] = index;


        for(i=0;i<m-1;i++)
            printf("%d ",n[i]);
        printf("%d\n",n[m-1]);

    }

    return 0;
}
