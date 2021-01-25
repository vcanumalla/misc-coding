import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class K {
    
    static ArrayList<Long> values = new ArrayList<>();
	
	public static long[] filterValue(long n, long i) { 
		long[] result = new long[2];
		boolean works = ((n % i) == 0); 
		if(works) { 
            result[0] = 1; 
		}
		long num = n;
		if(num % i == 0) { 
			values.add(i);
			num /= i;
		}
		result[1] = num;
		return result;
	}
	
	
	public static boolean isConsective(long n) { 
        long[] previous_result = filterValue(n , 2);
        if(previous_result[1] % 2 == 0) { 
            return false;
        }
		if(previous_result[1] == 1) { 
			return true;
        }
		long[] current_result = filterValue(previous_result[1], 3);
		if(current_result[1] == 1) { 
			return true;
		} else if(previous_result[0] == 1 && current_result[0] == 0) { 
			return false; 
		}
		boolean found_working = current_result[0] == 1; 
		long loop_boundary = n;
		n = current_result[1];
		for(long i = 5; i <= loop_boundary; i += 6) { 
			previous_result = filterValue(n, i);
			current_result = filterValue(previous_result[1], i + 2);
			if(previous_result[1] == 1) { 
				return true;
			}
			if(current_result[1] == 1) { 
				return previous_result[0] == 1; 
			}
			if(found_working && (previous_result[0] != 1 || current_result[0] != 1)) { 
				return false;
			} else if(!found_working) {
				if(previous_result[0] == 1) { 
					if(current_result[0] == 0) { 
						return false;
					}
					found_working = true;
				} if(current_result[1] == 1) { 
					found_working = true;
				}
			}
			n = current_result[1];
		}
		return found_working;
	}
	
	public static void main (String [] args) throws IOException {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(reader.readLine());
        boolean sucess = false;
        if(n > 1) { 
            sucess = isConsective(n); 
        }
	    if(!sucess) { 
	    	System.out.println("NO");
	    } else { 
	    	System.out.println("YES");
	    	for(long x : values) { 
	    		System.out.print(x + " ");
	    	}
	    	System.out.println();
	    }
	}
    
}
