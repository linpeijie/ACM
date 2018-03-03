#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int i,j;

    while(scanf("%d",&n)!=EOF) {
        if(sqrt(n*1.0) == (int)sqrt(n*1.0))
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
