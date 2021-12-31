import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.ArrayList;
import java.util.List;

public class CF9D2A {
    public static void main(String[] args) throws IOException {
        List<Integer> list = new ArrayList<Integer>();
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        String[] input = bi.readLine().split(" ");

        for (int i = 0; i < input.length; i++) {
            list.add(Integer.parseInt(input[i]));
        }

        int d = Collections.max(list);

        int nominator = 7 - d;
        int division;
        if (nominator % 6 == 0) {
            division = 6;
        } else if(nominator % 3 == 0) {
            division = 3;
        } else if(nominator % 2 == 0) {
            division = 2;
        } else {
            division = 1;
        }
        
        String str = String.format("%s/%s", nominator/division, 6/division);

        System.out.println(str);
    }
}
