#include<stdio.h>
#include<string.h>
int main(){
    int n,lamp[10000];
    int i,j;

    memset(lamp,0,sizeof(lamp));

    for(i=1;i<10001;i++)
        for(j=i;j<10001;j++)
            if(j%i == 0) {
                if(lamp[j] == 1)
                    lamp[j] = 0;
                else
                    lamp[j] = 1;
            }

    while(scanf("%d",&n)!=EOF){
        printf("%d\n",lamp[n]);
    }
    return 0;
}
