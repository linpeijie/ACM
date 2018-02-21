/*
1.先将16进制A，B转化为10进制A，B
2.计算A+B
3.将计算结果转化为16进制输出
注意：输入数据有‘＋’‘－’的判断
*/
#include<stdio.h>
#include<string.h>

char H[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

/*字符转数值*/
int stringToInt(char c[]){
    if(c[0]>='0' && c[0]<='9')
        return c[0]-'0';
    else
        return c[0]-'A'+10;
}

/*16进制转10进制*/
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

/*10进制转16进制*/
char dToH(long long n){
    if(n<16){
            printf("%c",H[n]);
    }
    else{
        
        dToH(n/16);
       
        printf("%c",H[n%16]);
    }

}

int main(){
    char A[16],B[16];
    long long sum,a,b;

    while(scanf("%s %s",A,B)!=EOF){
        /*判断‘＋‘和’－‘*/
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
