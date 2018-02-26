#include<stdio.h>

int countU(int n){
    if(n<10)
        return n;
    else
        return n%10+countU(n/10);
}

int countT(int n){
    if(n<12)
        return n;
    else
        return n%12+countT(n/12);
}

int countX(int n){
    if(n<16)
        return n;
    else{
        return n%16+countX(n/16);
    }
}

int main(){
    int n;
    int countu,countx,countt;

    while(scanf("%d",&n)!=EOF,n){
        countu = countU(n);
        countx = countX(n);
        countt = countT(n);

        if(countu==countx && countu==countt && countx==countt)
            printf("%d is a Sky Number.\n",n);
        else
            printf("%d is not a Sky Number.\n",n);
    }

    return 0;
}
