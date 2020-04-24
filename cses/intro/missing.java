import java.util.*;
public class missing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<Integer> nums = new HashSet<>();
        int n = sc.nextInt();
        for (int i = 0; i < n -1; i++) {
            nums.add(sc.nextInt());
        }
        for (int i = 1; i <= n; i++) {
            if(nums.contains(i)) {
            }
            else {
                System.out.println(i);
                break;
            }
        }
    }
}
