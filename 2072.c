#include<stdio.h>
#include<string.h>

typedef struct {
    char ch[100];
}memory;

int main(){
    char sentence[2000],letter[100];
    int count,i,j,flag;
    memory m[1000];    

    while(gets(sentence) && strcmp(sentence,"#")){
        j=0;
        count = 0;

        for(i=0;i<strlen(sentence);i++){
            flag = 1;
            
            if(sentence[i]!=' ')
                letter[j++] = sentence[i];
            else{
                j=0;
                memset(letter,0,sizeof(letter));
                
                for(j=0;j<count;j++)
                    if(strcmp(m[j].ch,letter)){
                        flag = 0;
                        break;
                    }

                if(flag){
                    strcpy(m[count++].ch,letter);
                }
            }

        }
        
        printf("%d\n",count+1);
    }
    return 0;
}
