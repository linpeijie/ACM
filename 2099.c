#include<stdio.h>

int main(){
    long a,b;
    int i,flag=0;

    while(scanf("%ld%ld",&a,&b)!=EOF && (a!=0 && b!=0)){
        flag = 0;
        for(i=0;i<100;i++){
            if((i+a*100)%b == 0){
                if(i<10){
                    printf("0%d",i);
                    flag =1;
                }
                else if(i>9 && flag ==1)
                    printf(" %d",i);    
                else{
                    printf("%d",i);
                    flag = 1;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
