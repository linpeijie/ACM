#include<stdio.h>
#include<stdbool.h>

bool rec_subset(int arr[],int i,int s){
    if(s == 0)
        return true;
    if(i == 0)
        return arr[0] == s;
    if(arr[i] > s)
        return rec_subset(arr,i-1,s);
    else{
        bool A = rec_subset(arr,i-1,s-arr[i]);
        bool B = rec_subset(arr,i-1,s);
        return A || B;
    }
}

int main(){
    int n,s,i;
    int arr[100];

    while(scanf("%d%d",&n,&s),n,s){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        if(rec_subset(arr,n-1,s))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
