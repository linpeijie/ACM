#include<stdio.h>
#include<string.h>

int main(){
    int M,i,YES,length,index;
    char ch[50];
    int flag[50];

    scanf("%d",&M);

    while(M--){
        scanf("%s",ch);
        getchar();

        length = strlen(ch);

        if(strlen(ch)<8 || strlen(ch)>16){
            printf("NO\n");
            continue;
        }

        for(i=0;i<strlen(ch);i++){
            if(ch[i]>='A' && ch[i]<='Z')
                flag[i]=1;
            else if(ch[i]>='a' && ch[i]<='z')
                flag[i]=2;
            else if(ch[i]>='0' && ch[i]<='9')
                flag[i]=3;
            else if(ch[i]=='~'||ch[i]=='!'||ch[i]=='@'||ch[i]=='#'||ch[i]=='$'||ch[i]=='%'||ch[i]=='^')
                flag[i]=4;
            else
                flag[i]=0;
        }

        for(i=0;i<length;i++)
            if(flag[i]==0)
                printf("NO\n");

        int j;
        for(i=0;i<length;i++)
            for(j=0;j<length-i-1;j++)
                if(flag[j]>flag[j+1]){
                   index = flag[j]; 
                   flag[j] = flag[j+1];
                   flag[j+1] = index;
                }

        for(YES=1,i=1;i<length;i++)
            if(flag[i]!=flag[i-1])
                YES++;

        if(YES>=3)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
