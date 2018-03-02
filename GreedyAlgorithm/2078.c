/* 贪婪算法
算法设计思路： 这里用的是暴力解法，直接算出所有情况进行比较，选出得数最大的为答案。根据题意，要得出答案有几种场景需要考虑：
1.当前选取的元素，一定比上一个小，比下一个大。即 a(i-1) > a(i) > a(i+1)，且必须满足此元素的效率值是剩下之中最高的，即effic(i)>effic{i...n}。
2.当前效率值 effic = （a(i-1) - a(i)）的平方，总效率值 ＝ 当前效率值 ＋ 之前效率值之和
3.选取的第一门课不一定是第一个输入的数据，所以需要对所有的课遍历一遍，当当前课程为第一门课时比之前求过的总效率值还高时，以当前课为第一门课重新计算。
4.设置一个备忘录，用来记录已经选过的课程。
算法实现：
1.输入数据，对数据进行降序排序。
2.循环遍历n门课，并判断当前课是否可以作为新的第一门课
3.找出未记录数当中效率值最大的数，并记录在备忘录中。（从池子中挑出一个最大的放到手中的篮子中）
4.不断循环3，直到满足m，或者已经没有未记录数。（池子已空）
5.输出计算结果
*/
#include<stdio.h>

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

        sort(a,n);                                            //降序排序
        
        sum = 0;
        count = 0;
        for(i=0;i<n;i++){                                     //循环遍历每门课
            max = i;                                          //备忘录，记录第一门课的序号
            effic = (100-a[i])*(100-a[i]);                    //第一门课的效率值
            if(sum < effic){                                  //若当前课比之前算出来的答案高，则重新计算
                count = 0;
                b[count] = a[i];
                sum = effic;
                while(flag && count<m){                       //找出剩下课程中效率值最高的课程，加到备忘录b中，注意判断循环结束条件
                    flag = 0;                                 //flag 判断循环是否结束
                    for(j=max+1;j<n;j++){                     //找出最高的那个
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
