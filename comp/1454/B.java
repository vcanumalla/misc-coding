import java.util.*;
import java.io.*;

public class B {
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int t = sc.nextInt();
        for (int i = 0 ; i < t; i++) {
            int n = sc.nextInt();
            List<Integer> list = new ArrayList<>();
            Map<Integer, Integer> map = new HashMap<>();
            for (int j = 0; j < n; ++j) {
                int val = sc.nextInt();
                list.add(val);
            }
            for (int  j = 0; j < n; ++j) {
                if (map.containsKey(list.get(j))) {
                    map.put(list.get(j), -1);
                } else {
                    map.put(list.get(j), j);
                }
            }
            // System.out.println(map);
            int minIndex = -1;
            int min = Integer.MAX_VALUE;
            for (int j : map.keySet()) {
                // if (map.get(j) != -1) {
                //     minIndex = j < min ? map.get(j) + 1 : minIndex;
                //     System.out.println(minIndex);
                // }
                if (j < min) {
                    if (map.get(j) != -1) {
                        min = j;
                        minIndex = map.get(j) + 1;
                    }
                }
            }
            System.out.println(minIndex);
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