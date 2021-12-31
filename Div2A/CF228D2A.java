import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class CF228D2A {
    public static void main(String[] args) throws IOException {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        String[] str = bi.readLine().split(" ");
        Arrays.sort(str);

        int count = 1;
        for (int i = 0; i < str.length -1; i++) {
            if (!str[i].equals(str[i+1])) {
                count++;
            }
        }

        System.out.println(4-count);
    }    
}
