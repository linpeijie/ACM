#include<stdio.h>
#include<string.h>

typedef struct name{
    char str[100];
    int lose;
}name;

int main(){
    int n,i,j,count;
    name winer[1005];
    name loser[1005];
    
    
    while(scanf("%d",&n),n){
        count = 0;
        
        for(i = 0; i < n;i++){
            scanf("%s%s",winer[i].str,loser[i].str);
            winer[i].lose = 0;
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(!strcmp(winer[i].str,loser[j].str))
                    winer[i].lose = 1;
            }
        }

        for(i = 0; i < n; i++)
            if(winer[i].lose == 0){
                count++;
            }

        if(count == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
