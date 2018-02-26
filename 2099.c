#include<stdio.h>

int main(){
    long a,b;
    int i,flag=0;

    while(scanf("%ld%ld",&a,&b)!=EOF && (a!=0 && b!=0)){
        flag = 0;
        for(i=0;i<100;i++){
            if((i+a*100)%b == 0){
                if(i==0)
                    printf("00 ");
                else{
                    if(flag==0){
                        printf("%d",i);
                        flag = 1;
                    }
                    else
                        printf(" %d",i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
