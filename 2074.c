/*算法设计思想：一种是暴力输出，一行一行输出；另一种是作图思想，将其视为二维数组，先将图谱画出，再输出*/

#include<stdio.h>
char pic[100][100];
int main()
{
    int n,i,p,q,center,j,count=0;
    char in,out;
    while(scanf("%d %c %c",&n,&in,&out)!=EOF)
    {
        getchar();
        
        if(count>0) 
            printf("\n");
        
        i=1;
        center=(n+1)/2;
        pic[center][center]=in;//中心;
        
        while(center>=i+1)
        {
            p=center-i;
            q=center+i;//顶点;
            
            for(j=0;j<2*i+1;j++)//填充次数;
            {
                pic[p][p+j]=i&1?out:in;//右;
                pic[p+j][p]=i&1?out:in;//下;
                pic[q][q-j]=i&1?out:in;//左;
                pic[q-j][q]=i&1?out:in;//上;
            }
            i++;
        }
        
        if(n!=1)//n==1会把中心磨没;
            pic[1][1]=' ',pic[1][n]=' ',pic[n][1]=' ',pic[n][n]=' ';//磨去四个角;
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                printf("%c",pic[i][j]);
            printf("\n");
        }
        count++;
    }
    return 0;
}
