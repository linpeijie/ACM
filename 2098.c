#include<stdio.h>
#include<stdbool.h>

bool isPrimeNumber(int n){
    int i;
    if(n==0 || n==1)
        return false;

    for(i=2;i<n/2;i++)
        if(n%i==0)
            return false;
    
    return true;
}

int main(){
    int n,i,count;

    while(scanf("%d",&n)!=EOF,n){
        count = 0;

        for(i=1;i<n/2;i+=2){
            if(isPrimeNumber(i)&&isPrimeNumber(n-i))
                count++;
        }

        printf("%d\n",count);
    }
    return 0;
}
