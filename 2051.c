#include<stdio.h>

int bitset(n){

    if(n==1 || n==0)
        printf("%d",n);
    else{
        bitset(n/2);
        printf("%d",n%2);
    }
}

int main(){
    int n;

    while(scanf("%d",&n)!=EOF){
        bitset(n);
        printf("\n");
    }

    return 0;
}
