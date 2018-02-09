#include<stdio.h>
#include<string.h>

int main(){
    char c[1000];
    int i,sum,j,n;

    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            gets_s(c);
            sum = 0;
            
            for(j=0;j<strlen(c);j+=2){
                if(c[j]>127)
                    sum++;
            }

            printf("%d\n",sum);
        }

    }

    return 0;
}
