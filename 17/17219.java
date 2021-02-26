import java.util.*;
import java.io.*;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = scan.nextInt();
        int M = scan.nextInt();

        HashMap<String, String> passwords = new HashMap<>();

        for(int i=0; i<N; i++){
            String url = scan.next();
            String password = scan.next();

            passwords.put(url, password);
        }

        for(int i=0; i<M; i++){
            String url = scan.next();
            System.out.println(passwords.get(url));
        }
    }
}
