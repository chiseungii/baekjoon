import java.util.*;

public class Main {
    public static char[][] video;
    public static String result;

    public static boolean isFull(int start_i, int start_j, int size){
        char first = video[start_i][start_j];

        for(int i=start_i; i<start_i+size; i++)
            for(int j=start_j; j<start_j+size; j++)
                if(video[i][j] != first) return false;

        return true;
    }

    public static void DNC(int start_i, int start_j, int size){
        if(size == 1 || isFull(start_i, start_j, size)){
            result += video[start_i][start_j];
            return;
        }

        int afterSize = size / 2;
        result += "(";

        DNC(start_i, start_j, afterSize);
        DNC(start_i, start_j+afterSize, afterSize);
        DNC(start_i+afterSize, start_j, afterSize);
        DNC(start_i+afterSize, start_j+afterSize, afterSize);

        result += ")";
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        result = "";

        int N = scan.nextInt();
        video = new char[N][N];

        for(int i=0; i<N; i++){
            String str = scan.next();
            for(int j=0; j<N; j++)
                video[i][j] = str.charAt(j);
        }

        DNC(0, 0, N);

        System.out.println(result);
    }
}
