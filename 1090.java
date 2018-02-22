import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);
        int N,a,b;

        N = scanf.nextInt();
        while(N!=0){
            N--;
            a = scanf.nextInt();
            b = scanf.nextInt();

            System.out.println(a+b);
        }
    }
}
