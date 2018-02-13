#include<stdio.h>
/*
  当n=1时，共有 ‘EOF’3种分法；
  当n=2时，分两种情况'EF'各有3种分法，共6种，'O'只有2种分法，所以f[2]=8;
  当n=3时，有两个'EOF'，每个'EOF'相当于f[2]时的分法，所以共有2f[2]=16种，一个'EF'共有6种分法，相当于2f[1]=6种，所以f[3]=22
  ...
  当n=n时，以此类推，共有f[n] = 2(f[n-1]+f[n-2])；

*/

int main(){
    int n,i;
    long long result[50]={0,3,8};

    for(i=3;i<50;i++)
        result[i] = 2*(result[i-1]+result[i-2]);

    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",result[n]);
    }

    return 0;
}
