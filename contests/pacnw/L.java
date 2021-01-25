import java.util.*;
import java.io.*;

public class L {

    public static void main(String[] args) throws IOException {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(reader.readLine());
		int n = Integer.parseInt(st.nextToken());
		if(n <= 0) { 
			return;
		}
		int[] original_values = new int[n];
		st = new StringTokenizer(reader.readLine());
		for(int i = 0; i < n; i++) { 
			original_values[i] = Integer.parseInt(st.nextToken());
		}
		Arrays.sort(original_values);
		int num_even = (original_values.length + 1)/2;
		int[] lowest_difference = new int[n];
		for(int i = 0; i < num_even; i++) { 
			lowest_difference[i] = original_values[2 * i];
		}
		int num_odd = original_values.length - num_even; 
		int starting = original_values.length - 1; 
		if(starting % 2 == 0) { 
			starting -= 1; 
		}
		for(int i = 0; i < num_odd; i++) { 
			lowest_difference[num_even + i] = original_values[starting - 2 * i];
		}
		int max_difference = 0;
		for(int i = 0; i < n; i++) { 
			int lower = i - 1;
			if(lower < 0) { 
				lower = n + lower;
			}
			int higher = i; 
			int difference = Math.abs(lowest_difference[higher] - lowest_difference[lower]);
			max_difference = Math.max(max_difference, difference);
		}
		System.out.println(max_difference);
		reader.close();
	}
    
}
