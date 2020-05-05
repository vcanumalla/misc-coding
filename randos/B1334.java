import java.util.*;
import java.io.*;
public class B1334 {
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int t= sc.nextInt();
        for (int i = 0; i  < t; i++) {
            int n = sc.nextInt();
            long x = sc.nextLong();
            long sum = 0;
            int[] arr = new int[n];
            for (int j = 0; j < n; j++) {
                int num = sc.nextInt();
                sum += num;
                arr[j] = num;
            }
            Arrays.sort(arr);
            long maxCount = n;
            
            for (int j = 0; j < n; j++) {
                if (sum >= x * maxCount) {
                    break;
                }
                else {
                    maxCount--;
                    sum -= arr[j];
                }
            }
            System.out.println(maxCount);
        }
    }
}






/////////////////////////////////////////////
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
  

