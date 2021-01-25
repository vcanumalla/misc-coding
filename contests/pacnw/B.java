import java.util.*;
import java.io.*;
import java.text.DecimalFormat;

public class B {

    public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(reader.readLine());
		int n = Integer.parseInt(st.nextToken()); int s = Integer.parseInt(st.nextToken());
		int[] values = new int[n];
		st = new StringTokenizer(reader.readLine());
		for(int i = 0; i < n; i++) {
			values[i] = Integer.parseInt(st.nextToken());
		}
		long count = 0;
		long product_sum = 0;
		for(int i = 0; i < n; i++) { 
			for(int j = 0; j < n; j++) { 
				if(i != j) { 
					product_sum += s * values[i] * values[j];
					count += 1;
				}
			}
        }
        double result = (1.0 * product_sum)/count;
        DecimalFormat df = new DecimalFormat("0.00000");
		System.out.println(df.format(result));
		reader.close();
	}

}