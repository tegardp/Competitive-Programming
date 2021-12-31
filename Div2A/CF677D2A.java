import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class CF677D2A{
    public static void main(String[] args) throws IOException {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        int num[] = new int[2];
        String[] firstLine;
        String[] secondLine;
        int sum = 0;

        firstLine = bi.readLine().split(" ");

        for(int i =0; i < firstLine.length; i++) {
            num[i] = Integer.parseInt(firstLine[i]);
        }

        int n = num[0];
        int h = num[1];

        secondLine = bi.readLine().split(" ");
        int num2[] = new int[n];
        for(int i =0; i< secondLine.length; i++) {
            num2[i] = Integer.parseInt(secondLine[i]);
        }

        for (int i = 0; i<n; i++) {
            if (num2[i] > h)
                sum++;
        }

        System.out.println(n+sum);
    }
}