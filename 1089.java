import java.util.Scanner;

class IOPractice1{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int a,b;

        while(scanf.hasNext())
{
            a = scanf.nextInt();
            b = scanf.nextInt();

            System.out.printf("%d\n",a+b);
        }
    }
}
