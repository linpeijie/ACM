#include<stdio.h>
#include<string.h>

char H[6]={'A','B','C','D','E','F'};

int stringToInt(char c[]){
    if(c[0]>='0' && c[0]<='9')
        return c[0]-'0';
    else
        return c[0]-'A'+10;
}

int hToD(char h[]){
    int i,sum,length;

    sum = stringToInt(h);
    
    if(h[0] == '\0')
        return 0;
    else{
        for(i=0;i<strlen(h)-1;i++)
            sum *= 16;

        return sum+hToD(h+1);        
    }    
}

char dToH(int n){
    if(n<16){
        if(n>=10)
            printf("%c",H[n-10]);
        else
            printf("%d",n);
    }
    else{
        
        dToH(n/16);
       
        if((n%16)>10)
            printf("%c",H[n%16-10]);
        else
            printf("%d",n%16);
    }

}

int sumAB(char a[],char b[]){
    if(a[0]=='+'&& b[0]=='+')
        return hToD(a+1)+hToD(b+1);
    else if(a[0]=='-'&& b[0]=='+')
        return hToD(b+1)-hToD(a+1);
    else if(a[0]=='+'&& b[0]=='-')
        return hToD(a+1)-hToD(b+1);
    else
        return -(hToD(a+1)+hToD(b+1));
}

int main(){
    char A[16],B[16];
    int sum,a,b;

    while(scanf("%s %s",A,B)!=EOF){
        sum = sumAB(A,B); 
        
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
