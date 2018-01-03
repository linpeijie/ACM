//
//  1002.c
//  acm
//
//  Created by  lpj on 18/1/1.
//  Copyright © 2018年  lpj. All rights reserved.
//

#include "1002.h"

void A1002(){
    int T,lenga=0,lengb=0,len=0;
    char SA[1001],SB[1001];
    
    scanf("%d\n",&T);
    
    for(int i=1;i<=T;i++){
        len=0;                                  //每次运算时都要初始化
        int A[1001]={0},B[1001]={0};
        
        scanf("%s %s",SA,SB);
        
        lenga = strlen(SA);
        lengb = strlen(SB);
        
        for(int i=lenga-1,j=0;i>=0;i--)         //字符串转换成数值
            A[j++] = SA[i] - '0';
        for(int i=lengb-1,j=0;i>=0;i--)
            B[j++] = SB[i] - '0';
        
        for(int i = 0;i<1001;i++){              //计算A+B,大于9进位
            A[i] += B[i];
            if(A[i]>9){
                A[i]-=10;
                A[i+1]++;
            }
        }
        
        for(int i=1000;i>=0;i--){               //求出和的数位，从后往前找
            if(A[i]!=0)
                break;
            else
                len++;
        }
        
        printf("Case %d:\n",i);                 //格式化输出
        printf("%s + %s = ",SA,SB);
        for(int i=(1001-len-1);i>=0;i--)
            printf("%d",A[i]);
        printf("\n");
        if(i != T)                              //注意最后一个输出结尾不空行
            printf("\n");
    }
    
}
