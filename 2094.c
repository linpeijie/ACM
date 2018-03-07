/* 算法设计思想：
1.根据题意，得出：两个人只能比赛一次，最后的冠军一定没输过；所以只要胜利组没输过的人只有一个，就能判断是否能产生冠军
2.特殊值判断：胜利组有可能一个人出现多次，所以需要一个条件避免重复计算同一个人
*/

#include<stdio.h>
#include<string.h>

typedef struct name{
    char str[100];
    int lose;
}name;

int main(){
    int n,i,j,count;
    char flag[100];
    name winer[1005];
    name loser[1005];
    
    
    while(scanf("%d",&n),n){
        count = 0;
        
        for(i = 0; i < n;i++){
            scanf("%s%s",winer[i].str,loser[i].str);
            winer[i].lose = 0;
        }

        //判断胜利组的人是否输过，输过的话lose赋值1
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(!strcmp(winer[i].str,loser[j].str))
                    winer[i].lose = 1;
            }
        }
        
        //对未输过的人进行判断
        memset(flag,'\0',sizeof(flag));  
        for(i = 0; i < n; i++)
            if(winer[i].lose == 0 && strcmp(flag,winer[i].str)){          //防止如果a多次出现而出现的重复计算的bug
                count++;
                strcpy(flag,winer[i].str);                                //用flag记录出现过的人
            }

        if(count == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
