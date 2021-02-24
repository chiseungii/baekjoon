import java.util.*;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args){
        Comparator<Integer> comparator = new Comparator<Integer>() {
            @Override
            public int compare(Integer a, Integer b) {
                if(Math.abs(a) == Math.abs(b)){
                    if(a == b) return 0;
                    else if(a < b) return -1;
                    else return 1;
                }
                else if(Math.abs(a) < Math.abs(b)) return -1;
                else return 1;
            }
        };

        int N = scan.nextInt();
        PriorityQueue<Integer> heap = new PriorityQueue<>(comparator);

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
