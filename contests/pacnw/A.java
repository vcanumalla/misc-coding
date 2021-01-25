import java.util.*;
import java.io.*;
public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long m = sc.nextLong();
        long n = sc.nextLong();
        int[] nums = new int[10];
        int[] temp = new int[10];
        String aStr = Long.toString(a);
        // Get number of times each digit appears in a, put it in nums
        for (int j = 0; j < aStr.length(); j++) {
            int digit = Integer.parseInt("" + aStr.charAt(j));
            nums[digit]++;
        }
        StringBuilder sb = new StringBuilder(aStr);
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < 10; j++) {
                if (nums[j] != 0) {
                    String freq = Integer.toString(nums[j]);
                    for (int k = 0; k < freq.length(); k++) {
                        temp[Integer.parseInt("" + freq.charAt(k))]++;
                    }
                    sb.append(nums[j]);
                }
            }
            for (int j = 0; j < 10; j++) {
                nums[j] += temp[j];
                temp[j] = 0;
            }
        }
        
         System.out.println(mod(sb.toString(), m));
    }
    public static long mod(String num, long m) {
        long res = 0;
        for (int i = 0; i < num.length(); ++i ){
            res = (res * 10 + (int) (num.charAt(i) - '0')) % m;
        }
        return res;
    }
}
  