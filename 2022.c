#include<stdio.h>
#include<math.h>

int main(){
    int m,n,x,y,s;
    int i,j,value;
    
    while(scanf("%d%d",&m,&n)!=EOF){
        int score[m+1][n+1];
        value = 0;

        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++){
                scanf("%d",&score[i][j]);
                if(abs(score[i][j])>value){
                    value = abs(score[i][j]);
                    x = i;
                    y = j;
                    s = score[i][j];
                }
            }

         printf("%d %d %d\n",x,y,s);
        
    }


    return 0;
}
