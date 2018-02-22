import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int a,b;

        while(true){
            a = scanf.nextInt();
            b = scanf.nextInt();
            
            if(a==0&&b==0)
                break;
            else
                System.out.println(a+b);
        }
    }
}
