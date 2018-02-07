//
//  1003.c
//  acm
//
//  Created by  lpj on 18/1/4.
//  Copyright © 2018年  lpj. All rights reserved.
//

#include "1003.h"

void MaxSumDP(){
    int T,N,A[100001];
    
    scanf("%d",&T);
    
    for(int t=1;t<=T;t++){
        scanf("%d",&N);
        
        for(int i=0;i<N;i++)
            scanf("%d",&A[i]);
/**
        max = A[0];                         //记录最大值
        for(int i=0;i<N;i++){               //暴力求解，求出所有子序列之和，找出其中最大的
            sum = A[i];
            for(int j=i+1;j<N;j++){
                sum+=A[j];
                if(sum > max){
                    max = sum;
                    first = i;
                    last = j;
                }
            }
        }
        first++;                            //数组下标＋1
        last++;
**/
        
        int max = A[0];
        int first=0,last=0,index=0,sum=0;
        
        for(int i=0;i<N;i++){               //用动态规划算法思想，求解出问题的最优解结构，根据其结构性质构建递推公式，列出算法
            sum+=A[i];
            if(sum > max){
                max = sum;
                last = i;
                first = index;
            }
            if(sum < 0){
                sum = 0;
                index = i+1;
            }
        }
        
        first++;
        last++;
        
        printf("Case %d:\n",t);
        printf("%d %d %d\n",max,first,last);
        
        if(t!=T)
            printf("\n");
    
    }
}
