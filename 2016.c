#include<stdio.h>

int main(){
    int n[101],m;
    int i,min,flag,index;

    while(scanf("%d",&m)!=EOF && m!=0){
        min = 0;

        for(i=0;i<m;i++){
            scanf("%d",&n[i]);
            if(n[i]<min){
                min = n[i];
                flag = i;
            }
        }

        if(flag!=0){
            index = n[0];
            n[0] = n[flag];
            n[flag] = index;
        }

        for(i=0;i<m;i++)
            printf("%d ",n[i]);
        printf("\n");

    }

    return 0;
}
