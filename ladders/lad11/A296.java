import java.util.*;
public class A296 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] numCount = new int[1001];
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            numCount[sc.nextInt()]++;
        }
        boolean bool = true;
        for (int i = 0; i < 1001; i++) {
            if (numCount[i] > (n+1) /2) {
                bool = false;
                break;
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
