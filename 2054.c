#include<stdio.h>
#include<string.h>

void process(char a[]){
	/*将多余的 0 去掉*/
	int i, j,len,dot=-1;

	/*找出小数点位置*/
	len = strlen(a);
	for (i = 0; i <= len - 1; i++)
	{
		if (a[i] == '.')
		{
			dot = i;
			break;
		}
	}
	/*去掉多余的 0*/
	if (dot >= 0)
	{
		for (i = len - 1;i>=0; i--)
		{
			if (a[i] != '0')
				break;
			else
				a[i] = '\0';
		}
		/*多余的小数点直接吐掉*/
		if (a[i] == '.')
			a[i] = '\0';
	}
}

int main(){
    char A[100000],B[100000];

    while(scanf("%s%s",A,B)!=EOF){

        process(A);
        process(B);
        if(!strcmp(A,B))
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}

