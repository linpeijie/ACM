#include<stdio.h>

int main(){
    int n,i,j,count;
    char ch;

    while(scanf("%c",&ch) && ch!='@'){
        scanf("%d",&n);
        getchar();

        for(i=1;i<n;i++){
            count = 2*n-1;
            for(j=1;j<=count/2+1;j++){
                if(j!=count/2+2-i)
                    printf(" ");
                else
                    printf("%c",ch);
            }

            for(j=count/2;j<count;j++){
                if(i!=1){
                    if(j==count/2+i-2)
                        printf("%c",ch);
                    else
                        printf(" ");
                }                    
            }
            printf("\n"); 
        }

        for(i=1;i<=2*n-1;i++){
            if(i!=2*n-1)
                printf("%c",ch);
            else
                printf("%c\n",ch);
        }
        printf("\n");
    } 
    return 0;
}
