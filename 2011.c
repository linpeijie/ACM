#include<stdio.h>

int main(){
    int n[1000];
    int m,i,j;
    double result;

    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&j);
        n[i] = j;
    }

    for(i=0;i<m;i++){

        result=0;

        for(j=1;j<=n[i];j++){
            if(j%2!=0)
                result += 1.0/j;
            else
                result -= 1.0/j;            
        }

        printf("%.2lf\n",result);
    }
    
    return 0;
}
