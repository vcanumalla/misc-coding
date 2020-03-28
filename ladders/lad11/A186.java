import java.util.*;
public class A186 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        char[] word1 = sc.next().toCharArray();
        char[] word2 = sc.next().toCharArray();
        if (word1.length != word2.length) {
            System.out.println("NO");
        }
        else {
            int count = 0; 
            int index1 = -1;
            int index2 = -1;
            boolean bool = true;
            boolean answer  = true;
            for (int i = 0; i < word1.length; i++) {
                if (word1[i] != word2[i]) {
                    ++count;
                    if (count > 2) {
                        bool = false;
                        answer = false;
                    }
                    if (count == 1) {
                        index1 = i;
                        
                    }
                    else {
                        index2 = i;
                    }
                }   
            }
            if (count == 2) {
                if (word1[index1] == word2[index2] && word1[index2] == word2[index1] ) {
                      System.out.println("YES");
                }
                else {
                    System.out.println("NO");
                }

            }
            else {
                System.out.println("NO");
            }
        }
    }
}
