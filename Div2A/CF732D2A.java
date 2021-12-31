import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CF732D2A {
    public static void main(String[] args) throws IOException {
        int count = 1;
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        String[] str = bi.readLine().split(" ");

        int num[] = new int[2];
        int str_length = str.length;
        for (int i = 0; i < str_length; i++) {
            num[i] = Integer.parseInt(str[i]);
        }

        int k = num[0];
        int r = num[1];
        while (true) {
            if (k*count % 10 == 0) {
                break;
            } else if ((k * count - r) % 10 == 0) {
                break;
            }
            count++;
        }

        System.out.println(count);
    }
}
