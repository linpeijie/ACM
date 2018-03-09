#include<stdio.h>

int max(int a,int b){
    if(a > b)
        return a;
    else
        return b;
}

int rec_opt(int arr[],int i){
    int A,B;

    if(i==0)
        return arr[0];
    else if(i==1)
        return max(arr[0],arr[1]);
    else{
        A = rec_opt(arr,i-2)+arr[i];
        B = rec_opt(arr,i-1);
        return max(A,B);    
    }
}

int dp_opt(int arr[],int n){
    int opt[n],i,A,B;

    opt[0] = arr[0];
    opt[1] = max(arr[0],arr[1]);

    for(i=2;i<n;i++){
        A = opt[i-2]+arr[i];
        B = opt[i-1];
        opt[i] = max(A,B);
    }
    
    return opt[n-1];
}

int main(){
    int arr[100];
    int n,i,max,num;

    while(scanf("%d",&n),n){
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        max = dp_opt(arr,n);

        printf("%d\n",max);
    }
    return 0;
}
