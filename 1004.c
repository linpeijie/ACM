#include<stdio.h>
#include<string.h>

int main(){
    char s[1001][15];
    int n,i,j,flag;
    int max=0,sum=0;

    while(scanf("%d",&n)!=EOF && n){
        for(i=0;i<n;i++){
            scanf("%s",s[i]);
        }

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if((strcmp(s[i],s[j]))==0)
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
