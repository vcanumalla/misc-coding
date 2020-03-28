import java.util.*;
import java.io.*;
class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new FileReader("milk.in"));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("milk.out")));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        TreeMap<Integer, Integer> farms = new TreeMap<>();
        int cost = 0;
        for (int i = 0; i < m; i++) {
            StringTokenizer t = new StringTokenizer(bf.readLine());
            int unitCost = Integer.parseInt(st.nextToken());
            int amount = Integer.parseInt(st.nextToken());
            if (farms.containsKey(unitCost)) {
                int oldAmount = farms.get(unitCost);
                oldAmount += amount;
                farms.put(unitCost, oldAmount);
            }
            else {
                famrs.put(unitCost, amount);
            }

        }
        Set<Integer> keys = farms.keySet();
        for (Integer key: keys) {
            if (n <= 0) {
                pw.println(cost);
                break;
            }
            else {
                int maxNum = 0;
                for (int i = 1; i <= farms.get(key); i++) {
                    
                    if ( key * i < n ) {

                    }
                }
            }
        }
    }
}
