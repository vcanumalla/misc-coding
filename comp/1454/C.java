import java.util.*;
import java.io.*;

public class C {
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int t = sc.nextInt();
        for (int i = 0 ; i < t; i++) {
            Map<Integer, List<Integer>> map = new HashMap<>();
            int n = sc.nextInt();
            for (int j = 0; j < n; j++) {
                int num = sc.nextInt();
                if (!map.containsKey(num)) {
                    map.put(num, new ArrayList<>());
                    map.get(num).add(0);
                }
                map.get(num).add(j  + 1);
            }

            
            int minOperations = Integer.MAX_VALUE;
            for (int num : map.keySet()) {
                List<Integer> indexes = map.get(num);
                indexes.add(n + 1);
                int operations = 0;
                for (int j = 1; j < indexes.size(); j++) {
                    if (indexes.get(j) - indexes.get(j - 1) > 1) {
                        operations++;
                    }
                }
                minOperations = Math.min(minOperations, operations);
            }
            System.out.println(minOperations);
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