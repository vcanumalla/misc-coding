import java.util.*;
import java.io.*;

public class D {
    public static void main(String[] args) {
        int MAX = 100000;
        boolean[] isPrime = new boolean[MAX + 1];
        for (int i = 1; i <= MAX; i++) {
            isPrime[i] = true;
        }
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i <= MAX; i++) {
            if (isPrime[i] && (long)i * i <= MAX) {
                for (int j = i * i; j <= MAX; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        List<Integer> primes = new ArrayList<>();
        for (int i = 2; i <= MAX; i++) {
            if (isPrime[i]) {
                primes.add(i);
            }
        }

        FastReader sc = new FastReader();
        int tt = sc.nextInt();
        while (tt-- > 0) {
            long n = sc.nextLong();
            long m = n;
            int best = 1;
            int bestOccurs = 0;
            int cur = 0;
            while (m > 1 && cur < primes.size()) {
                int p = primes.get(cur);
                int occurs = 0;
                while (m % p == 0) {
                    m /= p;
                    occurs++;
                }
                if (occurs > bestOccurs) {
                    best = p;
                    bestOccurs = occurs;
                }
                cur++;
            }

            if (n == m) {
                System.out.println(1);
                System.out.println(n);
            } else {
                System.out.println(bestOccurs);
                for (int i = 0; i < bestOccurs - 1; i++) {
                    System.out.print(best + " ");
                    n /= best;
                }
                System.out.println(n);
            }
        }
    }
}

class FastReader {
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