#include<stdio.h>
/*经典的贪婪算法练习题，贪婪算法简单来讲即自顶向下，求解出每个子最优解，且每个子问题不会对下一个问题产生影响

该题算法模型为：
1.若每次选取开始时间最早的节目，无法求出最优解
2.若每次选取播放时间最短的节目，无法求出最优解
3.若每次选取结束时间最短的节目，用数学归纳法可以求出最优解

算法设计：
1.采用结构体数组存放数据
2.用冒泡排序法对 节目结束时间 进行升序排序
3.遍历节目数组，找出每一个节目结束时间最早的节目，并且当前节目开始时间需大于等于上一个节目结束时间
4.计算出符合条件的节目总数
*/

struct{
    int start;
    int end;
}program[101];

int main(){
    int n;
    int i,j;
    int sum;

    while(scanf("%d",&n)!=EOF && n!=0){
        for(i=0;i<n;i++)
            scanf("%d%d",&program[i].start,&program[i].end);

        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
                if(program[j].end>program[j+1].end){
                    program[100] = program[j];
                    program[j] = program[j+1];
                    program[j+1] = program[100];
                }

        for(j=1,i=0,sum=1;j<n;j++)
            if(program[j].start >= program[i].end ){
                i = j;
                sum++;
            }

        printf("%d\n",sum);
    }

    return 0;
}
