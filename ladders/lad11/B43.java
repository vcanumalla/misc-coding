import java.util.*;
class Main {
    public static void main(String[] args ) {
        Scanner sc = new Scanner(System.in);
        int[] ogCount= new int[123];
        int[] finalCount = new int[123];
        String s = sc.nextLine();
        s = s.trim();
        char[] ogChars = s.toCharArray();
        for (char d: ogChars) {
            ogCount[d]++;
        }
        char[] finalChars = sc.nextLine().trim().toCharArray();
        for (char d: finalChars) { 
            finalCount[d]++;
        }
        boolean bool = true;
        for (int i = 0; i < ogCount.length; i++) {
            if (finalCount[i] > ogCount[i] && i != 32) {
                bool = false;
                break;
            }
        }
        if (bool) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
