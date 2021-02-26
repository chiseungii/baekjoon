import java.util.*;
import java.io.*;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = scan.nextInt();

        int[] DP = new int[n + 1];
        DP[0] = 0; DP[1] = 1;

        for(int i=2; i<=n; i++){
            int root = (int)Math.sqrt(i);

            int min_cnt = 5;
            for(int j=1; j<=root; j++)
                if(DP[i - j*j] + 1 < min_cnt)
                    min_cnt = DP[i - j*j] + 1;

            DP[i] = min_cnt;
        }

        System.out.println(DP[n]);
    }
}
