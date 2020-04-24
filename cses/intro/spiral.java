import java.util.*;
public class spiral {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long sum;
            long row = sc.nextLong();
            long col = sc.nextLong();
            if (row > col) {
                if (row % 2 == 1) {
                    sum = (row - 1) * (row - 1)+ col;
                }
                else {
                    sum = (row) * (row) -  col + 1;
                    
                }
            }
            else if (row < col) {
                if (col % 2 == 0) {
                    sum = (col -1) * (col - 1)+ row;
                }
                else {
                    sum = (col) * (col) + 1 - row;
                }
            }
            else {
                if (row % 2 == 1) {
                    sum = (row - 1) * (row - 1)+ col;
                }
                else {
                    sum = (row) * (row) -  col + 1;
                    
                }
            }
            System.out.println(sum);
        }
    }
}
