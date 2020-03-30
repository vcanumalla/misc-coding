import java.util.*;
public class A350 {
    public static void main(String[] args ) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int maxCorrect = 0;
        int minCorrect = Integer.MAX_VALUE;
        int minIncorrect = Integer.MAX_VALUE;
        
        for (int i = 0; i < n; i++) {
           int num = sc.nextInt();
           minCorrect = Integer.min(minCorrect, num);
           maxCorrect = Integer.max(maxCorrect, num);
        }
        for (int i = 0 ; i < m; i++) {
            int num = sc.nextInt();
            minIncorrect = Integer.min(minIncorrect, num);
        }
        int v = maxCorrect;
        while (true) {
            boolean isValid = false;
            if (minCorrect * 2 <= v) {
                isValid = true;
                break;
            }
            else {
                v++;
            }
        }
        if (v < minIncorrect) {
            System.out.println(v);
        }
        else {
            System.out.println(-1);
        }
    }
}
