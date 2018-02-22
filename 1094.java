import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int N,n,sum;

        while(true){
            sum = 0;
            N = scanf.nextInt();

            for(int i=0;i<N;i++){
                n = scanf.nextInt();
                sum += n;
            }
           
            System.out.println(sum);
        }
    }
}
