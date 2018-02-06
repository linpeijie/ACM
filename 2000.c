#include<stdio.h>

int main(){
    char ch[3],c;
    int i,j;

    while(scanf("%s",ch)!=EOF){
        getchar();

        for(i=0;i<2;i++)
            for(j=0;j<2-i;j++){
                if(ch[j]>ch[j+1]){
                    c = ch[j];
                    ch[j] = ch[j+1];
                    ch[j+1] = c;
                }
            }

        for(i=0;i<3;i++){
            if(i!=2)
                printf("%c ",ch[i]);
            else
                printf("%c\n",ch[i]);
        }

    }

    return 0;
}
