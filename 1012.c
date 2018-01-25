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

/* 此题有另一种解法.....
# include<stdio.h>
int main()
{
printf("n e\n");
printf("- -----------\n");
printf("0 1\n1 2\n2 2.5\n");
printf("3 2.666666667\n");
printf("4 2.708333333\n");
printf("5 2.716666667\n");
printf("6 2.718055556\n");
printf("7 2.718253968\n");
printf("8 2.718278770\n");
printf("9 2.718281526\n");

return 0;
}
*/
