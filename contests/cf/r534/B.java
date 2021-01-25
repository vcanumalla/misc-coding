import java.util.*;
public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] s = sc.next().toCharArray();
        ArrayList<Character> word = new ArrayList<>();
        for (char c: s) {
            word.add(c);
        }
        boolean turn = false;
        Stack<Character> stack = new Stack<>();
        for (Character c: word) {
            if (stack.empty()) {
                stack.push(c);
            }
            else {
                if (c == stack.peek()) {
                    stack.pop();
                    if (turn) {
                        turn = false;
                    }
                    else {
                        turn = true;
                    }
                    
                }
                else {
                    stack.push(c);
                }
            }
        }
        if (!turn) {
            System.out.println("No");
        }
        else {
            System.out.println("Yes");
        }
    }
}
