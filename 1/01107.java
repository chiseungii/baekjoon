import java.util.*;
import java.io.*;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static boolean[] button = new boolean[10];

    public static int cnt_click(int n){
        if(n == 0) return button[0] ? 1 : -1;
        if(n < 0) return -1;

        int cnt = 0;

        while(n > 0){
            if(!button[n % 10]) return -1;

            cnt++;
            n /= 10;
        }

        return cnt;
    }

    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = scan.nextInt();
        int M = scan.nextInt();

        for(int i=0; i<10; i++) button[i] = true;
        for(int i=0; i<M; i++){
            char ch = scan.next().charAt(0);

            if(Character.isDigit(ch))
                button[ch - '0'] = false;
        }

        int dist = 0;
        int min_click = 1000000;

        while(M < 10){
            int down = N - dist;
            int up = N + dist;

            down = cnt_click(down);
            up = cnt_click(up);

            if(down == -1 && up == -1) dist++;
            else if(down == -1 || up == -1){
                min_click = (down == -1) ? up : down;
                break;
            }
            else{
                min_click = (down < up) ? down : up;
                break;
            }
        }

        min_click += dist;
        int click_100 = Math.abs(100 - N);

        System.out.println((min_click < click_100) ? min_click : click_100);
    }
}
