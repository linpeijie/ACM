import java.util.Scanner;
/*
注意判断 scanf.hasNext(),相当于C中的 scanf（）!= EOF。
*/

class Main{
    public static void main(String[] args){
        Scanner scanf = new Scanner(System.in);

        int N,n,sum;

        while(scanf.hasNext()){
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
