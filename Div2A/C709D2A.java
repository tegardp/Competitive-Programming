import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class C709D2A {
    public static void main(String[] args) throws IOException{
        int sum = 0;
        int count = 0;
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        String firstLine[] = bi.readLine().split(" ");

        int n = Integer.parseInt(firstLine[0]);
        int b = Integer.parseInt(firstLine[1]);
        int d = Integer.parseInt(firstLine[2]);


        String oranges[] = bi.readLine().split(" ");
        
        for (int i = 0; i < n; i++) {
            int orange_i = Integer.parseInt(oranges[i]);
            if (orange_i<=b) {
                sum+=orange_i;
            }
            if (sum > d) {
                sum = 0;
                count++;
            }
        }

        System.out.println(count);
    }
}
