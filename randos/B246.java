import java.util.*;
import java.io.*;

public class B246 {
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 0; i < n; ++i){ 
            sum += sc.nextInt();
        }
        if (sum % n == 0) {
            System.out.println(n);
            
        }
        else {
            System.out.println(n-1);
        }
    }
}
class FastReader    { 
        BufferedReader br; 
        StringTokenizer st; 
        public FastReader() {br = new BufferedReader(new InputStreamReader(System.in));} 
        String next() { 
            while (st == null || !st.hasMoreElements()) { 
                try { st = new StringTokenizer(br.readLine()); } 
                catch (IOException  e) {e.printStackTrace();} 
            } 
            return st.nextToken(); 
        } 
        int nextInt() { return Integer.parseInt(next());} 
        long nextLong() { return Long.parseLong(next());} 
        double nextDouble() {return Double.parseDouble(next());} 
  
        String nextLine() { 
            String str = ""; 
            try { str = br.readLine(); } 
            catch (IOException e) { e.printStackTrace(); } 
            return str; 
        } 
    }
