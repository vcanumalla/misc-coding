import java.util.*;
public class B4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numDays = sc.nextInt();
        int sumTime = sc.nextInt();
        int[][] times= new int[numDays][2];
        for (int i = 0; i < numDays; i++) {
           times[i][0] = sc.nextInt();
           times[i][1] = sc.nextInt();
        }
        int minTotal = 0;
        int maxTotal = 0;
        for (int i = 0; i < numDays; i++) {
            minTotal += times[i][0];
            maxTotal += times[i][1];
        }
        if (minTotal <= sumTime && maxTotal >= sumTime) {
            int delta = maxTotal - sumTime;
            boolean bool = false;
            if (delta == 0) {
                bool = true;
            }
            if (!bool) {
                for (int i = 0; i < numDays; i++) {
                    int maxChange = times[i][1] - times[i][0];
                    if (maxChange >= delta) {
                        times[i][1] = times[i][1] - delta;
                        delta = 0;
                        
                    }
                    else {
                       delta -= maxChange;
                       times[i][1] = times[i][0];
                    }
                    if (delta == 0) {
                        break;
                    }
                }
            }
                
            
            System.out.println("YES");
            for (int i = 0; i < numDays; i++) {
                System.out.print(times[i][1] + " ");
            }
        }
        else {
            System.out.println("NO");
        }
    }
}
