import java.util.Scanner;
public class Code {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int prod=1;
        while(a>0){
            int r=a%10;
            prod*=r;
            a/=10;
        }
        System.out.println(prod);
    }
}
