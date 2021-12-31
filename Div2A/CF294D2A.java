import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CF294D2A {
    public static void main(String[] args) throws IOException {
        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bi.readLine());
        String[] str = bi.readLine().split(" ");
        int a[] = new int[n];
        
        for (int i = 0; i < str.length; i++) {
            a[i] = Integer.parseInt(str[i]);
        }

        int m = Integer.parseInt(bi.readLine());
    
        for (int i = 0; i < m; i++) {
            int left = 0;
            int right = 0;
            String[] xy = bi.readLine().split(" ");
            int x = Integer.parseInt(xy[0]) - 1;
            int y = Integer.parseInt(xy[1]);

            for (int j = 1; j <= a[x]; j++) {
                if (j<y) 
                    left++;
                else if (j>y)
                    right++;
            }

            if (x == 0){
                a[x] = 0;
                if(a.length>1)
                    a[x+1] += right;
            }
            else if (x+1 == n) {
                a[x-1] += left;
                a[x] = 0;
            } else {
                a[x-1] += left;
                a[x+1] += right;
                a[x] = 0;
            }
        }

        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }    
}
