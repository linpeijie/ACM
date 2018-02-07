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
            
            if(result==i && flag==0){
                printf("%d",result);
                flag = 1;
            }
            else if(result==i && flag!=0)
                printf(" %d",result);            
        }

        

        if(flag==0)
            printf("no\n");
        else
            printf("\n");
    }

    return 0;
}
