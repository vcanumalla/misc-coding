import java.util.*;
import java.io.*;
public class C515 {
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int l = sc.nextInt();
        ArrayList<Integer> newDigits = new ArrayList<>();
        char[] digits = sc.next().toCharArray();
        for (char i: digits) {
            if (i == '4') {
                newDigits.add(2);
                newDigits.add(2);
                newDigits.add(3);
            }
            else if (i == '8') {
                newDigits.add(2);
                newDigits.add(2);
                newDigits.add(2);
                newDigits.add(7);
            }
            else if (i == '6') {
                newDigits.add(3);
                newDigits.add(5);
            }
            else if (i == '9') {
                newDigits.add(3);
                newDigits.add(3);
                newDigits.add(2);
                newDigits.add(7);
            }
            else if (i == '1' || i == '0') {

            }
            else {
                newDigits.add(i - 48);
            }
        }
        Collections.sort(newDigits);
        for (int i = newDigits.size() - 1; i >= 0; i--) {
            System.out.print(newDigits.get(i));
        }
    }
}
class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
  
