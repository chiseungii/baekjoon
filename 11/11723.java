import java.util.*;
import java.io.*;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int M = Integer.parseInt(br.readLine());    // 연산의 수
        boolean[] S = new boolean[21];              // 집합

        for(int i=1; i<21; i++) S[i] = false;

        for(int i=0; i<M; i++){
            String[] strs = br.readLine().split(" ");
            String str = strs[0];

            if(str.equals("all")){
                for(int j=1; j<21; j++) S[j] = true;
            }
            else if(str.equals("empty")){
                for(int j=1; j<21; j++) S[j] = false;
            }
            else{
                int x = Integer.parseInt(strs[1]);

                if(str.equals("add")) S[x] = true;
                else if(str.equals("remove")) S[x] = false;
                else if(str.equals("check"))
                    bw.write(S[x] ? "1\n" : "0\n");
                else S[x] = !S[x];
            }
        }

        bw.flush();
        br.close();
        bw.close();
    }
}
