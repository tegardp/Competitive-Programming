import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CF263D2A {
    public static void main(String[] args) throws IOException {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        int m =0 , n=0;
        for (int i = 0; i < 5; i++) {
            String[] str = bi.readLine().split(" ");
            for (int j = 0; j < 5; j++) {
                if(str[j].equals("1")) {
                    m = i;
                    n = j;
                    break;
                }
            }
        }

        int moves = Math.abs(2-n) + Math.abs(2-m);
        System.out.println(moves);
    }    
}
