/* 解题思路：纯粹的求递推公式，数学问题
因为：Ai=(Ai-1+Ai+1)/2 - Ci,  
      A1=(A0  +A2  )/2 - C1; 
      A2=(A1  +  A3)/2 - C2 , ... 
=>    A1+A2 = (A0+A2+A1+A3)/2 - (C1+C2) 
=>    A1+A2 =  A0+A3 - 2(C1+C2)  
同理可得： 
      A1+A1 =  A0+A2 - 2(C1)  
      A1+A2 =  A0+A3 - 2(C1+C2) 
      A1+A3 =  A0+A4 - 2(C1+C2+C3) 
      A1+A4 =  A0+A5 - 2(C1+C2+C3+C4) 
      ... 
      A1+An = A0+An+1 - 2(C1+C2+...+Cn) 
----------------------------------------------------- 左右求和 
     (n+1)A1+(A2+A3+...+An) = nA0 +(A2+A3+...+An) + An+1 - 2(nC1+(n-1)C2+...+2Cn-1+Cn) 
  
=>   (n+1)A1 = nA0 + An+1 - 2(nC1+(n-1)C2+...+2Cn-1+Cn) 
  
=>   A1 = [nA0 + An+1 - 2(nC1+(n-1)C2+...+2Cn-1+Cn)]/(n+1) 
*/


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
