#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    int i;

    while(gets(s)){
        getchar();

        s[0] = s[0] - 32;
        printf("%d",s[0]);
        for(i=1;i<strlen(s);i++){
            if(s[i] == ' ')
                s[i+1] = s[i+1] - 32;
        
            printf("%c",s[i]);
        }
  
        printf("\n");


    }

    return 0;
}
