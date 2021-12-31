import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CF231D2A {
    public static void main(String[] args) throws IOException{
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bi.readLine());
        int win = 0;
        
        while (n>0) {
            String[] str = bi.readLine().split(" ");
            int str_length = str.length;
            int sum = 0;
            for (int i = 0; i < str_length; i++) {
                int num = Integer.parseInt(str[i]);
                if(num == 1) {
                    sum++;
                }
            }
            if(sum>1) {
                win++;
            }
            n--;
        }

        System.out.println(win);
    }
}
