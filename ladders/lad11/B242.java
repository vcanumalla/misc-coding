import java.util.*;
public class B242 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] pairs = new int[2][n];
        int min = Integer.MAX_VALUE;
        int max = 0;
        for (int i = 0; i < n; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            pairs[0][i] = l;
            pairs[1][i] = r;
            if (l < min) {
                min = l;
            }
            if (r > max) {
                max = r;
            }

        }
        boolean bool = false;
        for (int i = 0 ; i < n; i++) {
            if (pairs[0][i] == min){
                if (pairs[1][i] == max) {
                    System.out.println(i + 1);
                    bool = true;
                    break;
                }
            }
        }
        if (!bool) {
            System.out.println(-1);
        }
    }
}
