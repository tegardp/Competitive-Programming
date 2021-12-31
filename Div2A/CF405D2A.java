import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class CF405D2A {
    public static void main(String[] args) throws IOException {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bi.readLine());
        String[] str = bi.readLine().split(" ");

        Arrays.sort(str);
        System.out.println(String.join(" ", str));
    }    
}
