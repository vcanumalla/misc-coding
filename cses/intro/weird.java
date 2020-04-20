import java.util.*;
public class weird {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        long num  = n;
        System.out.print(num);
        while (num != 1 ) {
            if (num % 2 == 0) {
                num /= 2;
                 
            }
            else {
                num *= 3;
                num++;
            }
            System.out.print(" " + num);
        }
    }
}
