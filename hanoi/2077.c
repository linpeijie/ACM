/* 只有第n个是特殊情况，[n-1]的放置方法跟3相同，所以只要加上2即可
*/
#include<stdio.h>

int main(){
    int T,n,i;
    int hanoi[21]={0,2};

    for(i = 2; i < 21; i++)
        hanoi[i] = 3*hanoi[i-1] + 2;

    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);

        printf("%d\n",hanoi[n-1]+2);

    }

    return 0;
}
