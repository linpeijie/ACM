#include<stdio.h>
#include<math.h>
/*The relationship between three sides of a triangle:The sum of both sides is greater than the third,and the difference between the two sides is less than the third.*/
int main(){
    int m;
    double a,b,c;

    scanf("%d",&m);
    while(m--){
        scanf("%d%d%d",&a,&b,&c);

        if(a+b>c && a+c>b && b+c>a && abs(a-b)<c && abs(a-c)<b && abs(b-c)<a)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
