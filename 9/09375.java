import java.util.*;

public class Main {

    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int T = scan.nextInt(); // 테케 수

        for (int tc = 0; tc < T; tc++) {
            int n = scan.nextInt(); // 의상 수
            Map<String, Integer> clothes = new HashMap<>(); // 의상 종류, 의상 수

            for (int i = 0; i < n; i++) {
                String name = scan.next();
                String category = scan.next();

                if (clothes.containsKey(category))
                    clothes.put(category, clothes.get(category) + 1);
                else
                    clothes.put(category, 1);
            }

            int result = 1;
            for (int i : clothes.values())
                result *= (i + 1);

            System.out.println(result - 1);
        }
    }
}
