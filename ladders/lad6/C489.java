import java.util.*;
public class C489 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int m = sc.nextInt();
        int s = sc.nextInt();
        int mum = m;
        int num = s;
        ArrayList<Integer> digits = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            if (num == 0 ) {
                digits.add(0);
            }
            if (num > 9 + mum -1) {
                digits.add(9);
                mum--;
                num -= 9;
            }
            else {
                digits.add(num - (mum - 1));
                mum--;
                num -= (num - (mum-  1));
            } 

        }
        int sum = 0;
        for (int i : digits) {
            sum += i;
        }
        int length = digits.size();
        boolean bool = false;
        if (length == m && sum  == s) {
            bool = true;
        }
        else {
            System.out.println(-1 + " " + "-1");
        }
        if (bool) {
            String str = "";
            for (int i : digits) {
                str += i;

            }
            String min = "";
            for (int i = digits.size()  -1; i >= 0; i-- ) {
                min += digits.get(i);
                
            }
            System.out.println(min + " " + str);
        }
        
    }
}