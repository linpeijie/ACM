#include<stdio.h>
#include<math.h>

int sort(int a[],int n){
    int i,j;
    int mid;

    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]<a[j+1]){
                mid = a[j+1];
                a[j+1] = a[j];
                a[j] = mid;
            }

    return 0;
}

int main(){
    int T,n,m;
    int i,j,a[101],b[101],count,max,flag;
    long long sum,effic;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        sort(a,n);
        
        sum = 0;
        count = 0;
        for(i=0;i<n;i++){
            max = i;
            effic = (100-a[i])*(100-a[i]);
            if(sum < effic){
                count = 0;
                b[count] = a[i];
                sum = effic;
                while(flag && count<m){
                    flag = 0;
                    for(j=max+1;j<n;j++){
                        if((b[count]-a[j])*(b[count]-a[j]) > (b[count]-a[max])*(b[count]-a[max])){
                            max = j;
                            count++;
                            b[count] = a[max];
                            flag = 1;    
                        }              
                    }
                    sum += (b[count]-a[max])*(b[count]-a[max]);
                }
            }
        }
        printf("%lld\n",sum);
    } 
    return 0;
}
