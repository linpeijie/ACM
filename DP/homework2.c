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

bool dp_subset(int arr[],int n,int S){
    bool subset[n][S+1];
    int i,j,s;

    for(i = 0; i < n; i++)
        subset[i][0] = true;

    for(i = 0,j = 0; j < S+1;j++)
        subset[i][j] = false;
    
    subset[0][arr[0]] = true;

    for(i = 1; i < n; i++)
        for(s = 1; s < S+1; s++){
            if(arr[i] > s)
                subset[i][s] = subset[i-1][s];
            else{
                bool A = subset[i-1][s-arr[i]];
                bool B = subset[i-1][s];
                subset[i][s] = A || B;
            }
        }

     return subset[n-1][S];
}

int main(){
    int n,s,i;
    int arr[100];

    while(scanf("%d%d",&n,&s),n,s){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        if(dp_subset(arr,n,s))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
