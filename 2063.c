#include<stdio.h>
#include<string.h>

int M,N,people[505][505],m[505],boy[505];

int find(int n){
    int k;
    for(k = 1; k <= N; k++) {
        if(people[n][k] == 1 && m[k] != 1) {
            m[k] = 1;
            if(boy[k] == 0 || find(boy[k])) {
                boy[k] = n;
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int K,i,A,B,count;

    while(scanf("%d",&K),K) {
        scanf("%d%d",&M,&N);
        memset(people,0,sizeof(people));
        memset(boy,0,sizeof(boy));
        count = 0;

        while(K--) {
            scanf("%d%d",&A,&B);
            people[A][B] = 1;
        }
        
        for(i = 1; i <= M; i++){
            memset(m,0,sizeof(m));
            if(find(i))
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
