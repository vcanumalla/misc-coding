import java.util.*;
import java.io.*;

public class A {
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int t = sc.nextInt();
        for (int i = 0 ; i < t; i++) {
            int n = sc.nextInt();
            for (int j = 2; j <= n; ++j) {
                System.out.print(j + " ");
            }
            System.out.print(1);
            System.out.println();
            
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
