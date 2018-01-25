#include<stdio.h>

double factorial(int n){
    if(n == 1)
        return 1;

    

    return n*factorial(n-1);
}


int main(){
    int n;
    double i=0,e=1;

    printf("n e\n");
    printf("- -----------\n");
    
    printf("%1.0lf %1.0lf\n",i,e);
    for(i=1;i<=9;i++){
        e += 1/factorial(i);
        if(i==1)
            printf("%1.0lf %1.0lf\n",i,e);
        else if(i==2)
            printf("%1.0lf %1.1lf\n",i,e);
        else
            printf("%1.0lf %.9lf\n",i,e);
    }

    return 0;
}
