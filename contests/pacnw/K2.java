import java.io.*;
import java.util.*;

public class K2 {

    static boolean isPrime(int n) { 
        // Corner case 
        if (n <= 1) 
            return false; 
  
        // Check from 2 to n-1 
        for (int i = 2; i < n; i++) 
            if (n % i == 0) 
                return false; 
  
        return true; 
    } 

    static ArrayList<Long> numbers = new ArrayList<>(); 

    public static boolean primeFactors(long n) { 
        while (n%2==0) { 
            if(numbers.contains(2)) { 
                return false; 
            }
            n /= 2; 
            numbers.append(2); 
        } 
        for (int i = 3; i <= Math.sqrt(n); i+= 2) { 
            while (n%i == 0) { 
                if(numbers.contains(i)) { 
                    return false; 
                }
                System.out.print(i + " "); 
                n /= i; 
                numbers.append(i); 
            } 
        } 
        if (n > 2) {
            return false; 
        }
    } 

    public static boolean containsBetween(long start, long end) { 
        for(int i = start + 2; start < end; i += 2) { 
            if(isPrime(i)) { 
                return true; 
            }
        } 
        return false; 
    }

    public static boolean primeChecker(long n) { 
        boolean result = primeFactors(n); 
        if(!results || numbers.size() < 2) { 
            return false; 
        }
        if(numbers.get(0) == 2) { 
            numbers.remove(0); 
        }
        for(int i = 0; i < numbers.size() - 1; i++) { 
            if(containsBetween(numbers.get(0), numbers.get(i + 1))) { 
                return false; 
            }
        }
        return true;
    }
    
    public static void main (String [] args) throws IOException {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	    long n = Long.parseLong(reader.readLine());
	    boolean sucess = primeChecker(n); 
	    if(!sucess) { 
	    	System.out.println("NO");
	    } else { 
	    	System.out.println("YES");
	    	for(long x : numbers) { 
	    		System.out.print(x + " ");
	    	}
	    	System.out.println();
	    }
	}
}
