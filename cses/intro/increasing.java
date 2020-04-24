import java.util.*;
public class increasing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long count = 0;
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
            
        }
        for (int i = 0; i < n - 1; i++) {
            int num1 = nums[i];
            int num2 = nums[i+1];
            if (num2 < num1) {
                count += (num1  - num2);
                nums[i+1] = num1;
            }
        }
        System.out.println(count);

    }
}
