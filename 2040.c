#include<stdio.h>

int main(){
    int m,i,j;
    double a,b,sum1,sum2;

    scanf("%d",&m);

    while(m--){
        scanf("%lf%lf",&a,&b);
        sum1 = 0;
        sum2 = 0;

        for(i=1;i<= a/2;i++)
            if((int)a%i == 0)
                sum1 += i;

        for(j=1;j<= b/2;j++)
            if((int)b%j == 0)
                sum2 +=j;

        if(sum1==b && sum2==a)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
