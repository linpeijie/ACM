#include<stdio.h>
#include<string.h>

int main(){
    /*String problem,
      which mean to determine how much string B is contained
      in string A.
    */

    char cha[1001],chb[1001];
    int i,j,count;

    while(scanf("%s",cha) && strcmp(cha,"#")!=0){
        scanf("%s",chb);
        
        count = 0;

        for(i=0,j=0;i<strlen(cha);i++){
            if(cha[i]!=chb[j])
                j=0;
            else
                j++;

            if(j==strlen(chb)){
                count++;
                j = 0;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
