#include<stdio.h>

int main(){
    double n;

    while(scanf("%lf",&n)!=EOF){
        if(n<0)
            n = -n;

        printf("%.2lf\n",n);
    }

    return 0;
}
