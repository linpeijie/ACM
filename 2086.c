#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j;
    double a0,an1,c[3002],a1,sum;

    while(scanf("%d",&n)!=EOF){
        scanf("%lf%lf",&a0,&an1);
        memset(c,'\0',sizeof(c));
        for(i=1;i<=n;i++)
            scanf("%lf",&c[i]);

        sum=0;
        for(i=n,j=1;i>=1;i--,j++)
            sum += i*c[j];
        
        a1 = (n*a0 + an1 - 2*sum)/(n+1);
        printf("%.2lf\n",a1);
    }    
    return 0;
}
