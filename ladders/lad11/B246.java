import java.util.*;
public class B246 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum+= sc.nextInt();
            
        }
        if (sum % n == 0) {
            System.out.println(n);
        }
        else {
            System.out.println(n-1);
        }
    }
}
