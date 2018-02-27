#include<stdio.h>

int main(){
    int n,i,j,count;
    char ch;

    while(scanf("%c%d",&ch,&n) && ch!='@'){
        for(i=1;i<n;i++){
            count = 2*n-1;
            for(j=1;j<=count/2;j++){
                if(j!=count/2-i+1)
                    printf(" ");
                else
                    printf("%c",ch);
            }

            for(j=count/2+1;j<=count/2+i;j++){
                if(i==1)
                    printf("\n");
                else if(j==count/2+i && i!=1)
                    printf("%c\n",ch);
                else
                    printf(" ");
            }
        }

        for(i=1;i<=2*n-1;i++){
            if(i!=2*n-1)
                printf("%c",ch);
            else
                printf("%c\n",ch);
        }
     }
    return 0;
}
