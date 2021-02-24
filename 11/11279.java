import java.util.*;

public class Test {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scan.nextInt();
        PriorityQueue<Integer> heap = new PriorityQueue<>(Collections.reverseOrder());

        for(int i=0; i<N; i++){
            int x = scan.nextInt();

            if(x == 0){
                if(heap.isEmpty()) System.out.println(0);
                else System.out.println(heap.poll());
            }
            else heap.offer(x);
        }
    }
}
