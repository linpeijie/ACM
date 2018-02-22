import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int N,a,sum;

        while(true){
            sum = 0;

            N = scanf.nextInt();
            if(N==0)
                break;

            for(int i=0;i<N;i++){
                a = scanf.nextInt();
                sum +=a;
            }

            System.out.println(sum);

        }
    }
}
