#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,n,m,q;
	char a[50];
	char b[7]={'~','!','@','#','$','$','%'};
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		j=k=l=q=0;
		gets(a);
		m=strlen(a);
		for(i=0;i<m;i++)
		{
			if((a[i]>=65)&&(a[i]<=90))j=1;
			if((a[i]>=95)&&(a[i]<=122))k=1;
			if((a[i]>=48)&&(a[i]<=57))l=1;
		for(int t=0;t<7;t++)
		{if(a[i]==b[t])q=1;
		}
		}
		if(((j+k+l+q)>=3)&&m>=8&&m<=16)
            printf("YES\n");
		else
		    printf("NO\n");
	 }
    return 0;
 }
