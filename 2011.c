/* 记忆化搜索，打表，也是动态规划的一个重要思想
*/

#include<stdio.h>

int main(){
    int n[1000];
    int m,i,j;
    double result[1001];

    result[1]=1;
    for(j = 2; j <= 1000; j++){
            if(j % 2 != 0)
                result[j] = result[j-1] + 1.0/j;
            else
                result[j] = result[j-1] - 1.0/j;            
    }
    
    scanf("%d",&m);
    for(i = 0;i < m; i++){
        scanf("%d",&j);
        n[i] = j;
    }

    for(i=0;i<m;i++){ 
        printf("%.2lf\n",result[n[i]]);
    }
    
    return 0;
}
