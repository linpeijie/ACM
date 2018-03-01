#include<stdio.h>
#include<string.h>

typedef struct {
    char ch[100];
}memory;

int main(){
    char sentence[9999],letter[100];
    int count,i,j,flag;
    memory m[1000];    

    while(scanf("%s",sentence)){
        if(!strcmp(sentence,"#"))
            break;

        count = 0;
        flag = 1;

        for(i=0;i<strlen(sentence);i++){
            if(sentence[i]!=' ')
                letter[j++]=sentence[i];
            else{
                j=0;
                printf("%s\n",letter);
                for(i=0;i<count;i++){
                    if(strcmp(letter,m[i].ch)){
                        flag = 0;
                        break;
                    }   
                }

                if(flag){
                    strcpy(m[count].ch,letter);
                    count+=1;
                    printf("%d",count);
                }
            }

            flag = 1;

        }

        printf("%d\n",count);
    }
    return 0;
}
