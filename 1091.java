import java.util.Scanner;

class Main(){
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int a,b;

        a = scanf.nextInt();
        b = scanf.nextInt();

        while(a!=0 && b!=0){
            System.out.println(a+b);

            a = scanf.nextInt();
            b = scanf.nextInt();
        }
    }
}
