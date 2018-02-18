#include<stdio.h>

int main(){
    int T,y,sum,i;
    char x;

    scanf("%d",&T);
    while(T--){
        getchar();
        scanf("%c %d",&x,&y);
        if(x>='A'&&x<='Z')
            printf("%d\n",((x-'A'+1)+y));
        else if(x>='a'&& x<='z')
            printf("%d\n",(-(x-'a'+1)+y));
    }

    return 0;
}
