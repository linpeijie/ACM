#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i,j,n,m;
	scanf("%d\n",&n);
	while(n--)
	{
		m=0;
		gets(s);
		j=strlen(s);
		for(i=0;i<j;i++)
		{
			if((s[i]<32)||(s[i]>126))
				m++;

		}
		printf("%d\n",(m+1)/2);
		
	}
    
    return 0;
}
