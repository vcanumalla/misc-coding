import java.util.*;
public class repetition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] stream = sc.next().toCharArray();
        int maxCount = 1;
        int count = 1;
        char cur = stream[0];
        for (int i = 1; i < stream.length; i++) {
            char c = stream[i];
            if (c == cur) { 
                count++;
            }
            else {
                maxCount = Integer.max(count, maxCount);
                count = 1;
                cur = c;
            }
        }
        maxCount  = Integer.max(count, maxCount);
        System.out.println(maxCount);
    }
}
