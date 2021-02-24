import java.util.*;

public class Main {

    public static int PN(String s, int n){
        int cnt = 0;
        int num = 0;

        for(int i=0; i<s.length() - 2; i++){
            if(s.charAt(i) == 'I' && s.charAt(i + 1) == 'O'
                    && s.charAt(i + 2) == 'I'){
                num++;

                if(num == n){
                    cnt++; num--;
                }

                i++;
            }
            else num = 0;
        }

        return cnt;
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int N = scan.nextInt();
        int M = scan.nextInt();
        String S = scan.next();

        System.out.println(PN(S, N));
    }
}
