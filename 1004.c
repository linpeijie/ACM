#include<stdio.h>
#include<string.h>

int main(){
    char s[1001][1000];
    int n,i,j,flag;
    int max,sum;

    while(scanf("%d",&n)!=EOF && n){
        for(i=0;i<n;i++){
            scanf("%s",s[i]);
        }
        
        max=-1;
        for(i=0;i<n;i++){
            sum=0;
            for(j=i+1;j<n;j++){
                if(strcmp(s[i],s[j])==0)
                    sum++;
                if(sum > max){
                    max = sum;
                    flag = i;
                }
            }
        }

        printf("%s\n",s[flag]);
    }
    return 0;
}
