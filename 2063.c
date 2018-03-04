#include<stdio.h>
#include<string.h>

int swap(int a[], int b[]){
    int c[1000];
    int i;
    
    for(i=0;i<sizeof(b);i++)
        a[i] = b[i];

    return 0;
}

int main(){
    int K,M,N,i,j,l,A,B,count,max;
    int people[1000][1000],m[1000];

    while(scanf("%d",&K),K) {
        scanf("%d%d",&M,&N);
        memset(people,'\0',sizeof(people));
        while(K--) {
            scanf("%d%d",&A,&B);
            people[A][B] = 1;
            people[A][0]++;
        }
        
        for(i = 1; i <= M; i++) {
            for(j = 1; j <= M-i; j++) {
                if(people[j][0] < people[j+1][0]){
                    swap(m,people[j]);
                    swap(people[j],people[j+1]);
                    swap(people[j+1],m);
                }    
            }
        }

        memset(m,'\0',sizeof(m));
        
        count = max = 0;
        for(l = 1; l <= N; l++) {
            memset(m,0,sizeof(m));
            
            if(people[1][l] == 1) {
                m[l] = 1;
                count = 1;
                for(i = 2; i <= M; i++)
                    for(j = 1; j <= N; j++) {
                        if(people[i][j] == 1) {
                            if(m[j] != 1) {
                                m[j] = 1;
                                count++;
                                break;
                            }
                        }
                    }
            } else continue;

            if(count > max)
                max = count;
        }

        printf("%d\n",max);
    }
    return 0;
}
