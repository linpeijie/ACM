#include<stdio.h>

char ch;

void f1(int n)
{
	for(int i=1;i<=n;i++)
		printf(" ");	
}

void f2(int n)
{
	if(n==1)
		printf("%c",ch);
	else
	{
		printf("%c",ch);
		for(int i=1;i<=2*n-3;i++)
			printf(" ");
		printf("%c",ch);
	}
}


int main()
{
	int n,flag=0;
	while(scanf("%c %d",&ch,&n)!=EOF&&(ch!='@'))
	{
		getchar();       //吃掉回车符 
		if(flag)	
            printf("\n");      //除第一个图形之外，每个图形前都加一个空行 
		for(int i=1;i<n;i++)
		{
			f1(n-i);   //输出前置空格 
			f2(i);     //输出第一个字母到最后一个字母及中间空格 
			printf("\n");
		}
		for(int i=1;i<=2*n-1;i++)    //输出最后一行 
			printf("%c",ch);
		printf("\n");
		flag=1;
	}
	return 0;
 }
