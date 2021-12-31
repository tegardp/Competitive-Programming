import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class CF734D2A {
    public static void main(String[] args) throws IOException {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        char[] str = bi.readLine().toCharArray();
        int str_length = str.length;

        int a = 0;
        for (int i = 0; i < str_length; i++) {
            if (str[i] == 'A') {
                a++;
            }
        }
        
        int d = str_length - a;
        if (a > d) {
            System.out.println("Anton");
        } else if (a < d) {
            System.out.println("Danik");
        } else {
            System.out.println("Friendship");
        }
    }
}
