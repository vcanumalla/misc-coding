import java.util.*;
public class permutations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        if (n < 5) {
            System.out.println("NO SOLUTION");
        }
        else {
            for (long i = n; i > 0; i -=2) {
                System.out.print(i + " ");
            }
            for (long i = n -1; i > 0; i -=2) {
                System.out.print(i + " ");
            }
        }
    }
}
