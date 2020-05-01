import java.util.*;
public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0 ; i < t; i++) {
            int n = sc.nextInt();
            int ogP = 0;
            int ogC = 0;
            boolean bool = true;
            for (int j = 0; j < n; j++) {
                int newP = sc.nextInt();
                int newC = sc.nextInt();
                if (newP < ogP || newC < ogC || newP < newC) {
                    bool = false;
                }
                else {
                    ogP = newP;
                    ogC = newC;
                }
            }
            if (bool) {
                System.out.println("YES");
                
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
