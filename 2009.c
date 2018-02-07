#include<stdio.h>
#include<math.h>

int main(){
    int n,m;
    double sum,t;

    while(scanf("%d%d",&n,&m)!=EOF){
        sum = n;
        t = n;

        while(m>1){
            t = sqrt(t);
            sum += t;
            m--; 
        }

        printf("%.2lf\n",sum);

    }


    return 0;
}
