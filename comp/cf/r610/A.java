import java.util.*;
public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (a > b) {
                int temp = a;
                a = b;
                b = temp;
                
            }
            int c = sc.nextInt();
            int r=  sc.nextInt();
            int min = c -r;
            int max = c+r;
            HashSet<Integer> mySet = new HashSet<>();
            for (int j = 0; j < (2 * r) + 1; j++) {
                mySet.add(min + j);
            }
            int count = 0;
            for (int j = a; j <= b; j++) {
                if (mySet.contains(j)) {
                    count++;
                }
            }
            if (count > 0) {
                System.out.println((b-a) - count + 1);
            }
            else {
                System.out.println((b-a));
            }
        }
    }
}
