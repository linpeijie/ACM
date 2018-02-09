#include<stdio.h>
#include<string.h>

int main(){
    char ch[101],max;
    int i,j;
    
    while(scanf("%s",ch)!=EOF){
        getchar();
        max = ch[0];

        for(i=0;i<strlen(ch);i++)
            if(ch[i]>max)
                max = ch[i];
        
        for(i=0;i<strlen(ch);i++)
            if(ch[i]>=max)
                printf("%c(max)",ch[i]);
            else
                printf("%c",ch[i]);

        printf("\n");
    }


    return 0;
}
