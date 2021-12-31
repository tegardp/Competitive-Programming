import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CF791D2A {
    public static void main(String[] args) throws IOException{
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        String[] firstline = bi.readLine().split(" ");

        int num[] = new int[firstline.length];
        for (int i = 0; i < firstline.length; i++) {
            num[i] = Integer.parseInt(firstline[i]);
        }

        int l = num[0];
        int b = num[1];
        int year = 0;

        while (true) {
            l *= 3;
            b *= 2;
            year++;
            
            if(l>b)
                break;
        }

        System.out.println(year);
    }
}
