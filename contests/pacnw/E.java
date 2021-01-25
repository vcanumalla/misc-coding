import java.util.*;
import java.io.*;
public class E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int I = sc.nextInt();
        int[] height = new int[N];
        for (int i = 0; i < N; i++) {
            height[i] = sc.nextInt();
        }
        int[] L = new int[I];
        int[] R = new int[I];
        for (int i = 0; i < I; i++) {
            L[i] = sc.nextInt() - 1;
            R[i] = sc.nextInt() - 1;
            int l = L[i];
            int r = R[i];
            int max = 0;
            for (int j = l; j <= r; j++) {
                max = Math.max(Math.min(j - l + 1, height[j]), max);
                System.out.println(j + " " + max);
            }
            System.out.println(max);
        }
    }
}