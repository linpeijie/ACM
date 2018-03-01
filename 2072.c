#include<stdio.h>
#include<string.h>

typedef struct {
    char ch[100];
}memory;

int main(){
    char sentence[2000],letter[100];
    int count,i,j,l,flag;
    memory m[1000];    

    while(gets(sentence) && strcmp(sentence,"#")){
        l=0;
        count = 0;

        for(i=0;i<=strlen(sentence);i++){
            flag = 1;
             
            if(sentence[i]!=' ' && (i!=strlen(sentence)))
                letter[l++] = sentence[i];
            else{
                if(l==0)
                    continue;

                l=0;
                
                for(j=0;j<count;j++){
                    if(strcmp(m[j].ch,letter))
                        flag = 1;
                    else{
                        flag = 0;
                        break;
                    }
                }

                if(flag){
                    strcpy(m[count].ch,letter);
                    count++;
                }

                memset(letter,'\0',sizeof(letter));
            }

        }
        
        printf("%d\n",count);
    }
    return 0;
}
