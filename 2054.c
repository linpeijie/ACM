#include<stdio.h>
#include<string.h>

int main(){
    char A[1000],B[1000];

    while(scanf("%s%s",A,B)!=EOF){
        getchar();

        if(!strcmp(A,B))
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
