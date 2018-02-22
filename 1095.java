import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int a,b;

        while(scanf.hasNext()){
            a = scanf.nextInt();
            b = scanf.nextInt();
            System.out.println(a+b);
            System.out.println();
        }
    }
}
