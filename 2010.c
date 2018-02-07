#include<stdio.h>

int main(){
    int m,n;
    int a,b,c,i;
    int result,flag=0;

    while(scanf("%d%d",&m,&n)!=EOF){
        flag = 0;

        for(i=m;i<=n;i++){

            a = i%10;
            b = (i%100)/10;
            c = i/100;

            result = a*a*a+b*b*b+c*c*c;
            
            if(result==i){
                printf("%d ",result);
                flag = 1;
            }
            
        }

        if(flag==0)
            printf("no\n");

    }

    return 0;
}
