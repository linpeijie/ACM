#include<stdio.h>

int main(){
    int m,n;
    int x,y;
    int i;
    
    while(scanf("%d%d",&m,&n)!=EOF){
        x=y=0;

        if(m>n){
            i = m;
            m = n;
            n = i;
        }

        for(i=m;i<=n;i++){
            if(i%2==0)
                x += i*i;
            else
                y += i*i*i;
        }

        printf("%d %d\n",x,y);

    }

    return 0;
}
