import java.util.*;
import java.io.*;
public class G {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(reader.readLine());
        int n = Integer.parseInt(st.nextToken()); 
        long[] arr1 = new long[(2 * n) - 1];
        long[] arr2 = new long[(2 * n) - 1];
        st = new StringTokenizer(reader.readLine());
        for (int i = 0; i < arr1.length; ++i) {
            arr1[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(reader.readLine());
        for (int i = 0; i < arr1.length; ++i) {
            arr2[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        boolean res1 = canWin(arr1, arr2, n);
        boolean res2 = canWin(arr2, arr1, n);
        if (res1 && res2) {
            System.out.println("TURNOFAFRIENDLYCARD");
        }
        else if (res1) {
            System.out.println("EZCLAP");
        } else {
            System.out.println("NERFPLS");
        }
        
    }
    
    public static boolean canWin(long[] p1, long[] p2, int n) {
        for (int i = 0; i < n; i++) {
            if (p2[i] >= p1[n + i - 1]) {
                return false;
            }
        }
        return true;
    }
}