#include<stdio.h>
#include<string.h>

char H[6]={'A','B','C','D','E','F'};

int stringToInt(char c[]){
    if(c[0]>='0' && c[0]<='9')
        return c[0]-'0';
    else
        return c[0]-'A'+10;
}

long long hToD(char h[]){
    int i,length;
    long long sum;

    sum = stringToInt(h);
    
    if(h[0] == '\0')
        return 0;
    else{
        for(i=0;i<strlen(h)-1;i++)
            sum *= 16;

        return sum+hToD(h+1);        
    }    
}

char dToH(long long n){
    if(n<16){
        if(n>=10)
            printf("%c",H[n-10]);
        else
            printf("%lld",n);
    }
    else{
        
        dToH(n/16);
       
        if((n%16)>10)
            printf("%c",H[n%16-10]);
        else
            printf("%lld",n%16);
    }

}

int main(){
    char A[16],B[16];
    long long sum,a,b;

    while(scanf("%s %s",A,B)!=EOF){
        if(A[0]=='-')
            a = -hToD(A+1);
        else if(A[0]=='+')
            a = hToD(A+1);
        else
            a = hToD(A);

        if(B[0]=='+')
            b = hToD(B+1); 
        else if(B[0]=='-')
            b = -hToD(B+1);
        else
            b = hToD(B);

        sum = a+b;        

        if (sum<0){
            printf("-");
            dToH(-sum);
        }
        else
            dToH(sum);
        printf("\n");
    }
    return 0;
}
