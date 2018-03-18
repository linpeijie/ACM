#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool pm(int n){
    int i,f;
    f = n*n + n + 41;
    
    for(i = 2; i <= sqrt(f); i++)
        if(f % i == 0)
            return false;

    return true;
}


int main(){
    int x,y,n;
    int count;

    while(scanf("%d%d",&x,&y),x,y){
        count = 0;
        for(n = x; n <= y; n++)
            if(pm(n))
                count++;

        if(count == y-x+1)
            printf("OK\n");
        else
            printf("Sorry\n");

    }
    return 0;
}
