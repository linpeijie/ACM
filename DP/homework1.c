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

int main(){
    int arr[100];
    int n,i,max,num;

    while(scanf("%d",&n),n){
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        max = 0;
        for(i=0;i<n;i++){
            num = rec_opt(arr,i);
            if(num > max) {
                max = num;
            }
        }

        printf("%d\n",max);
    }
    return 0;
}
