#include<stdio.h>
#include<string.h>
/*算法设计：采用 备忘录 设计方法，用备忘录存放不重复且计算过的单词
1.遍历字符串，分割出单词。
2.将新单词与备忘录中的单词对比，若不相同则count++，并存入备忘录。
3.count即为不重复的单词数。
注意：1.用空格来分割单词时，要注意判断最后一个单词后面是没有空格的，需要另外判断计算。
     2.用来分割新单词的变量每次都要清空，不然会有残留。
     3.需要判断是否输入了多个 空格，空格不计入计算当中，如“      ” 、“   asd  asd a”等形式
*/


typedef struct {
    char ch[100];
}memory;

int main(){
    char sentence[2000],letter[100];
    int count,i,j,l,flag;
    memory m[1000];    

    while(gets(sentence) && strcmp(sentence,"#")){
        l=0;
        count = 0;
        
        for(i=0;i<=strlen(sentence);i++){
            flag = 1;
           
            if(sentence[i]!=' ' && (i!=strlen(sentence)))       //分割单词，若遇到' 'or循环结束，则意味着已经收集到了一个单词，存放在letter中
                letter[l++] = sentence[i];
            else{
                if(l==0)                                        //判断是否输入了多个 空格，即letter没有存入任何单词
                    continue;

                l=0;                                            //从letter头指针开始重新计算
                
                for(j=0;j<count;j++){                           //判断是否跟备忘录里的单词重复,若是重复的，则flag＝0
                    if(strcmp(m[j].ch,letter))
                        flag = 1;
                    else{
                        flag = 0;
                        break;
                    }
                }

                if(flag){                                       //若没有重复，即flag＝1，则将其存入备忘录，count＋＋
                    strcpy(m[count].ch,letter);
                    count++;
                }

                memset(letter,'\0',sizeof(letter));             //letter 清空
            }

        }
        
        printf("%d\n",count);
    }
    return 0;
}
