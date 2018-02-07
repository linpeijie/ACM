#include<stdio.h>

int main(){
    int a,b;
    int result,mid;

    while(scanf("%d%d",&a,&b)!=EOF){
        if(a>b)
            mid = a;
        else
            mid = b;

        while(mid%a!=0 || mid%b!=0){
            mid +=1;
        }

        printf("%d\n",mid);
    }

    return 0;
}
