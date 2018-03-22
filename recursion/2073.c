#include<stdio.h>
#include<math.h>

int main(){
    int N,x1,x2,y1,y2;
    double f[205][205];
    int i,j;

    f[0][0] = 0.000;
    
    for(j = 1; j < 205; j++)
        f[0][j] = f[0][j-1] + sqrt(j*j + j*j) + sqrt(j*j + (j-1)*(j-1));

    for(i = 1; i < 101; i++)
        for(j = 0; j < 201; j++)
            f[i][j] = f[i-1][j+1] - sqrt(2);

    scanf("%d",&N);
    while(N--){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%.3lf\n",fabs(f[y2][x2]-f[y1][x1]));
    }
    return 0;
}

