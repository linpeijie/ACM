#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j;
    int flag;
    char c,e,ch;
    char a[81][81];

    flag = 0;
    while(scanf("%d %c %c",&n,&c,&e)!=EOF){
        getchar();
        
        memset(a,'\0',sizeof(a));
        if(flag)
            printf("\n");

        if(n==1){
            printf("%c\n",c);
            continue;
        } else if (n == 2){
            printf("%c%c\n",e,e);
            continue;
        }

        if(((n/2)+1)%2 == 1 ){
            ch = c;
            c = e;
            e = ch;
        }    

        for(i = 1; i <= (n/2)+1; i++){
             for(j = 0; j < n; j++){
                 if((j < i || j > n-i-1 ) && j%2 == 0){
                     if(i == 1 && (j == 0 || j == n-1)){
                         printf(" ");
                         ch = e;
                         a[i][j] = ' ';
                         continue;
                     }
                     printf("%c",e);
                     ch = e;
                     a[i][j] = e; 
                 }
                 else if((j < i || j > n-i) && j%2 == 1){
                     printf("%c",c);
                     ch = c;
                     a[i][j] = c;
                 }
                 else{
                     printf("%c",ch);
                     a[i][j] = ch;
                 }
             }
             printf("\n");
        }

        for(i = n/2; i > 0; i--)
            printf("%s\n",a[i]);

        flag = 1;
    }
    return 0;
}
