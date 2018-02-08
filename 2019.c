#include<stdio.h>

int main(){
    int n,m,num[101];
    int i,j;

    while(scanf("%d%d",&n,&m)!=EOF && n!=0 && m!=0){
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        
        for(i=n-1;m<num[i];i--)
            num[i+1] = num[i];

        num[i+1] = m;
        n++;

        for(i=0;i<n-1;i++)
            printf("%d ",num[i]);

        printf("%d\n",num[n-1]);
    }

    return 0;
}
