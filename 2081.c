#include<stdio.h>

int main(){
    int N,i;
    char phone[11];

    scanf("%d",&N);

    while(N--){
        scanf("%s",phone);
        printf("6");
        for(i=6;i<11;i++)
            printf("%c",phone[i]);
        printf("\n");
    }
    return 0;
}
