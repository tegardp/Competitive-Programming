import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CF265D2A {
    public static void main(String[] args) throws IOException{
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        int pos = 0;
        String s = bi.readLine();
        String t = bi.readLine();

        for (int i = 0; i < t.length(); i++) {
            if (t.charAt(i) == s.charAt(pos)) {
                pos++;
            }
        }

        System.out.println(pos+1);
    }
}
