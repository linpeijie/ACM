#include<stdio.h>

int main(){
    char Vegetable[1000];
    double num,price,sum=0;

    while(scanf("%s%lf%lf",Vegetable,&num,&price)!=EOF){
        sum += num*price;
    }

    printf("%.1lf\n",sum);

    return 0;
}
