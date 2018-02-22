import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int N,M,n,sum;

        N = scanf.nextInt();

        while(N!=0){
            sum = 0;
            M = scanf.nextInt();

            for(int i=0;i<M;i++){
                n = scanf.nextInt();
                sum += n;
            }

            N--;

            if(N!=0)
                System.out.printf("%d\n\n",sum);
            else
                System.out.println(sum);
        }
    }
}
